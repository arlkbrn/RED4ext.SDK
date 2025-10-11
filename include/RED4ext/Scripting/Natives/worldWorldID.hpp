#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/worldWorldID.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/worldWorldID.hpp>
#else
#error Unsupported platform
#endif
