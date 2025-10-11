#pragma once

#if defined(_WIN32)
#include <RED4ext/win/SharedMutex.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/SharedMutex.hpp>
#else
#error Unsupported platform
#endif
