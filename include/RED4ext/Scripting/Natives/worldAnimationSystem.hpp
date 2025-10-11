#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/worldAnimationSystem.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/worldAnimationSystem.hpp>
#else
#error Unsupported platform
#endif
