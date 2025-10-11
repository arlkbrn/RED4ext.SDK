#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gameIGameSystem.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gameIGameSystem.hpp>
#else
#error Unsupported platform
#endif
