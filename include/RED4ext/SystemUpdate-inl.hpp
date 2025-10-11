#pragma once

#if defined(_WIN32)
#include <RED4ext/win/SystemUpdate-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/SystemUpdate-inl.hpp>
#else
#error Unsupported platform
#endif
