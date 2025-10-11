#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Mutex.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Mutex.hpp>
#else
#error Unsupported platform
#endif
