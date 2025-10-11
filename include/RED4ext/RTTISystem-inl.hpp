#pragma once

#if defined(_WIN32)
#include <RED4ext/win/RTTISystem-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/RTTISystem-inl.hpp>
#else
#error Unsupported platform
#endif
