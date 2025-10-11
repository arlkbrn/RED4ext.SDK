#pragma once

#if defined(_WIN32)
#include <RED4ext/win/NativeTypes-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/NativeTypes-inl.hpp>
#else
#error Unsupported platform
#endif
