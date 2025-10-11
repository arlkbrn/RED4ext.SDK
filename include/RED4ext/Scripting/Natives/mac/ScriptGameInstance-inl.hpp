#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/ScriptGameInstance.hpp>
#endif

#include <iostream>
#include <mutex>

#include <RED4ext/GameEngine.hpp>
#include <RED4ext/RTTISystem.hpp>

RED4EXT_INLINE RED4ext::ScriptGameInstance::ScriptGameInstance(GameInstance* aInstance)
    : instance(aInstance)
    , unk8(1)
    , unk10(0)
{
    static std::once_flag flag;
    std::call_once(
        flag,
        []()
        {
            auto rtti = CRTTISystem::Get();
            auto gameInstanceType = rtti->GetClass("ScriptGameInstance");

            constexpr auto compiledSize = sizeof(ScriptGameInstance);
            auto nativeSize = gameInstanceType->GetSize();

            if (compiledSize != nativeSize)
            {
                // TODO: Add a message box implementation
                std::cout << "The compiled size do not match the native size of ScriptGameInstance.\nCheck the game "
                             "executable for the native size.\n";
                std::abort();
            }
        });

    if (!aInstance)
    {
        auto engine = RED4ext::CGameEngine::Get();
        if (engine)
        {
            auto framework = engine->framework;
            if (framework)
            {
                instance = framework->gameInstance;
            }
        }
    }
}
