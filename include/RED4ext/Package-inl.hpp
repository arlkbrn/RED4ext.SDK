#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Package-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Package-inl.hpp>
#else
#error Unsupported platform
#endif
