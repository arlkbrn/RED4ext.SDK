#pragma once

#if defined(_WIN32)
#include <RED4ext/Memory/win/Pool.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Memory/mac/Pool.hpp>
#else
#error Unsupported platform
#endif
