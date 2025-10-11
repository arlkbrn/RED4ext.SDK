#pragma once

#if defined(_WIN32)
#include <RED4ext/win/RTTITypes-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/RTTITypes-inl.hpp>
#else
#error Unsupported platform
#endif
