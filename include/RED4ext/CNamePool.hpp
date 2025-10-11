#pragma once

#if defined(_WIN32)
#include <RED4ext/win/CNamePool.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/CNamePool.hpp>
#else
#error Unsupported platform
#endif
