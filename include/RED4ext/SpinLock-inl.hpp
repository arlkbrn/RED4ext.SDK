#pragma once

#if defined(_WIN32)
#include <RED4ext/win/SpinLock-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/SpinLock-inl.hpp>
#else
#error Unsupported platform
#endif
