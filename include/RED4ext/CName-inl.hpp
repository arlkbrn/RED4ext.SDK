#pragma once

#if defined(_WIN32)
#include <RED4ext/win/CName-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/CName-inl.hpp>
#else
#error Unsupported platform
#endif
