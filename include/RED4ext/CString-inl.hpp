#pragma once

#if defined(_WIN32)
#include <RED4ext/win/CString-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/CString-inl.hpp>
#else
#error Unsupported platform
#endif
