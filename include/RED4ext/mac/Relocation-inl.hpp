#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Relocation.hpp>
#endif

#include <dlfcn.h>
#include <iostream>
#include <mach-o/dyld.h>
#include <mutex>
#include <sstream>

#include <RED4ext/Api/SemVer.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Memory.hpp>

RED4EXT_INLINE inline uint32_t RED4ext::RelocBase::GetImageIndex()
{
    static const auto imageIndex = []() -> uint32_t
    {
        for (uint32_t currImageIndex = 0; currImageIndex < _dyld_image_count(); currImageIndex++)
        {
            std::string_view imageName = _dyld_get_image_name(currImageIndex);
            if (imageName.ends_with("Cyberpunk2077.app/Contents/MacOS/Cyberpunk2077"))
                return currImageIndex;
        }
        return -1;
    }();
    return imageIndex;
}

RED4EXT_INLINE uintptr_t RED4ext::RelocBase::GetImageBase()
{
    static const auto base = std::bit_cast<uintptr_t>(_dyld_get_image_header(RED4ext::RelocBase::GetImageIndex()));

    return base;
}

RED4EXT_INLINE
uintptr_t RED4ext::UniversalRelocBase::Resolve(uint32_t aHash)
{
    if constexpr (Detail::AddressResolverOverride<uint32_t>::value)
    {
        return Detail::AddressResolverOverride<uint32_t>::Resolve(aHash);
    }
    else
    {
        const auto resolveFunc = GetAddressResolverFunction();

        auto address = resolveFunc(aHash);
        if (address == 0)
        {
            std::ostringstream stream;
            stream << "Failed to find the address for the hash (" << std::dec << aHash << ") provided by the plugin.\n"
                   << "This issue is likely caused by the mod using an incorrect or outdated hash.";

            ShowErrorAndTerminateProcess(stream.str(), false);
        }

        return address;
    }
}

RED4EXT_INLINE RED4EXT_HANDLE RED4ext::UniversalRelocBase::GetRED4extModule()
{
    static constexpr auto moduleName = "libRED4ext.dylib";

    static const auto imageIndex = []() -> uint32_t
    {
        for (uint32_t currImageIndex = 0; currImageIndex < _dyld_image_count(); currImageIndex++)
        {
            std::string_view imageName = _dyld_get_image_name(currImageIndex);
            if (imageName.ends_with(moduleName))
                return currImageIndex;
        }
        return -1;
    }();

    const auto handle = dlopen(_dyld_get_image_name(imageIndex), RTLD_NOLOAD);
    if (!handle)
    {
        static constexpr auto msg =
            "The mod you are using could not locate the necessary module (i.e. libRED4ext.dylib) in the "
            "loaded modules, which is required by the mod to resolve addresses correctly.\n"
            "This may occur if RED4ext is not properly loaded into the current process.\n"
            "\n"
            "Please ensure that RED4ext is correctly installed.\n"
            "\n"
            "If you are the mod's developer, verify that your mod was loaded by RED4ext. "
            "Alternatively, you may need to provide your own address resolver.";

        // ShowErrorAndTerminateProcess(msg, GetLastError());
        ShowErrorAndTerminateProcess(msg, false);
    }

    //  TODO: Determine if calling dlopen() with the RTLD_NOLOAD flag increases the reference count.
    //        Manual says the handle returned is ref-counted, but unsure if it is including the current
    //        dlopen() call, or if its just reminding us that the existence of the handle implies it has
    //        been previously ref-counted.
    // dlclose(handle);

    return handle;
}

RED4EXT_INLINE RED4ext::UniversalRelocBase::ResolveFunc_t RED4ext::UniversalRelocBase::
    InitializeAddressResolverFunction()
{
    static constexpr auto procName = "RED4ext_ResolveAddress";

    const auto handle = GetRED4extModule();

    const auto func = std::bit_cast<ResolveFunc_t>(dlsym(handle, procName));
    if (func == nullptr)
    {
        static constexpr auto msg =
            "The mod you are using is unable to find the required address resolver function from RED4ext.\n"
            "This may occur if RED4ext is not properly loaded, OR if the mod is incompatible with the current "
            "version of RED4ext.\n"
            "\n"
            "Please ensure that RED4ext is correctly installed AND that both RED4ext and the mod are "
            "up-to-date.";

        // ShowErrorAndTerminateProcess(msg, GetLastError());
        ShowErrorAndTerminateProcess(msg, false);
    }

    return func;
}

RED4EXT_INLINE RED4ext::UniversalRelocBase::ResolveFunc_t RED4ext::UniversalRelocBase::GetAddressResolverFunction()
{
    static const ResolveFunc_t func = InitializeAddressResolverFunction();
    return func;
}

RED4EXT_INLINE RED4EXT_HANDLE RED4ext::UniversalRelocBase::GetCurrentModuleHandle()
{
    RED4EXT_HANDLE result;

    result = dlopen(GetCurrentModulePath().c_str(), RTLD_NOLOAD);
    if (!result)
    {
        static constexpr auto msg =
            "Unable to retrieve the handle for a plugin.\n"
            "Normally, this issue should not happen.\n"
            "\n"
            "What you can do:\n"
            "    1. Disable all mods.\n"
            "    2. Enable them one by one.\n"
            "    3. Start the game after each change to see if the issue happens again.\n"
            "\n"
            "For more detailed instructions on identifying the mod causing the issue, visit the following link:\n"
            "    "
            "https://wiki.redmodding.org/cyberpunk-2077-modding/for-mod-users/"
            "user-guide-troubleshooting#finding-the-broken-mod-bisecting\n"
            "\n"
            "By following these instructions, you can identify the mod causing the issue and report it to the mod "
            "author for further assistance.";

        // TODO: Implement a message box on Mac similar to Windows
        std::cout << msg << "\n";
        exit(1);
    }

    return result;
}

RED4EXT_INLINE std::filesystem::path RED4ext::UniversalRelocBase::GetCurrentModulePath()
{
    Dl_info libInfo{};

    if (dladdr(std::bit_cast<void*>(&UniversalRelocBase::Resolve), &libInfo) && libInfo.dli_fname != nullptr)
    {
        return libInfo.dli_fname;
    }

    return {};
}

RED4EXT_INLINE RED4ext::UniversalRelocBase::QueryFunc_t RED4ext::UniversalRelocBase::GetCurrentPluginQueryFunction()
{
    static constexpr auto procName = "Query";

    const auto handle = GetCurrentModuleHandle();

    const auto func = std::bit_cast<QueryFunc_t>(dlsym(handle, procName));
    if (func == nullptr)
    {
        static constexpr auto msg = "Could not get the 'Query' function for the current mod.\n"
                                    "Normally, this issue should not happen.\n"
                                    "\n"
                                    "If you are the mod's developer, verify that your mod was loaded by RED4ext and "
                                    "that it exports the 'Query' function needed for the mod to interact with "
                                    "RED4ext. Alternatively, you may need to provide your own address resolver.";

        ShowErrorAndTerminateProcess(msg, false);
    }

    return func;
}

RED4EXT_INLINE bool RED4ext::UniversalRelocBase::QueryCurrentPlugin(PluginInfo& aPluginInfo)
{
    const auto queryFunc = GetCurrentPluginQueryFunction();
    if (!queryFunc)
    {
        return false;
    }

    try
    {
        queryFunc(&aPluginInfo);
    }
    catch (...)
    {
        return false;
    }

    return true;
}

RED4EXT_INLINE void RED4ext::UniversalRelocBase::ShowErrorAndTerminateProcess(std::string_view aMsg,
                                                                              std::uint32_t aLastError,
                                                                              bool aQueryPluginInfo)
{
    ShowErrorAndTerminateProcess(aMsg, aQueryPluginInfo);
}

RED4EXT_INLINE void RED4ext::UniversalRelocBase::ShowErrorAndTerminateProcess(std::string_view aMsg,
                                                                              bool aQueryPluginInfo)
{
    const auto path = GetCurrentModulePath();

    std::string pluginName = path.stem();
    std::string pluginVersion = "Not available (Query was intentionally disabled)";

    if (aQueryPluginInfo)
    {
        PluginInfo pluginInfo{};

        auto isQuerySuccessful = QueryCurrentPlugin(pluginInfo);
        if (isQuerySuccessful)
        {
            if (pluginInfo.name)
            {
                pluginName = pluginInfo.name;
            }

            pluginVersion = std::to_string(pluginInfo.version);
        }
        else
        {
            pluginVersion = "Not available (Query failed)";
        }
    }

    auto title = pluginName + ": Address Resolver";

    std::ostringstream msg;
    msg << aMsg << "\n"
        << "-----------------------------\n"
        << "The mod has encountered a critical error while trying to resolve an address hash and needs to terminate "
           "the game's process to prevent unexpected behavior in the game.\n"
        << "-----------------------------\n"
        << "Here is some debug information that may help resolve or report the issue:\n"
        << "    - Error Message: " << std::dec << dlerror() << "\n"
        << "    - Plugin: " << pluginName << "\n"
        << "    - Version: " << pluginVersion << "\n"
        << "    - Path: " << path.c_str();

    //  TODO: Determine if calling dlopen() with the RTLD_NOLOAD flag increases the reference count.
    std::cout << msg.str().c_str();
}
