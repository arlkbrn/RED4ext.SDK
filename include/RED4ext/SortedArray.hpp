#pragma once

#if defined(_WIN32)
#include <RED4ext/win/SortedArray.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/SortedArray.hpp>
#else
#error Unsupported platform
#endif
