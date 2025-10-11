#pragma once

#if defined(_WIN32)
#include <RED4ext/Memory/win/Pools.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Memory/mac/Pools.hpp>
#else
#error Unsupported platform
#endif
