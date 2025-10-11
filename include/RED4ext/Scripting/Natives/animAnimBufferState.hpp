#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/animAnimBufferState.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/animAnimBufferState.hpp>
#else
#error Unsupported platform
#endif
