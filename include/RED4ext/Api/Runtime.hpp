#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/win/Runtime.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/mac/Runtime.hpp>
#else
#error Unsupported platform
#endif
