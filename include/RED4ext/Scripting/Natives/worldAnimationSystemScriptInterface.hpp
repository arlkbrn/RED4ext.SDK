#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/worldAnimationSystemScriptInterface.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/worldAnimationSystemScriptInterface.hpp>
#else
#error Unsupported platform
#endif
