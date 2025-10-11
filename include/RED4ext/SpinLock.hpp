#pragma once

#if defined(_WIN32)
#include <RED4ext/win/SpinLock.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/SpinLock.hpp>
#else
#error Unsupported platform
#endif
