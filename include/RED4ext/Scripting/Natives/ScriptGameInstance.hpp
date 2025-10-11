#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/ScriptGameInstance.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/ScriptGameInstance.hpp>
#else
#error Unsupported platform
#endif
