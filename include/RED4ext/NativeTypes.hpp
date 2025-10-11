#pragma once

#if defined(_WIN32)
#include <RED4ext/win/NativeTypes.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/NativeTypes.hpp>
#else
#error Unsupported platform
#endif
