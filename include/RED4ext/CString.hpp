#pragma once

#if defined(_WIN32)
#include <RED4ext/win/CString.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/CString.hpp>
#else
#error Unsupported platform
#endif
