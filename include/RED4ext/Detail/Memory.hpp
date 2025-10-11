#pragma once

#if defined(_WIN32)
#include <RED4ext/Detail/win/Memory.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Detail/mac/Memory.hpp>
#else
#error Unsupported platform
#endif
