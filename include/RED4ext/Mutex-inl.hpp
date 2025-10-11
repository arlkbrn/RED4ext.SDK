#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Mutex-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Mutex-inl.hpp>
#else
#error Unsupported platform
#endif
