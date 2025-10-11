#pragma once

#if defined(_WIN32)
#include <RED4ext/win/SharedSpinLock-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/SharedSpinLock-inl.hpp>
#else
#error Unsupported platform
#endif
