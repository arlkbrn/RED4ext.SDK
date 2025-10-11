#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Buffer-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Buffer-inl.hpp>
#else
#error Unsupported platform
#endif
