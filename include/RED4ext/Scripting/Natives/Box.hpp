#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/Box.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/Box.hpp>
#else
#error Unsupported platform
#endif
