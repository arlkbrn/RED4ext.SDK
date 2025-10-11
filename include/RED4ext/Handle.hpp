#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Handle.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Handle.hpp>
#else
#error Unsupported platform
#endif
