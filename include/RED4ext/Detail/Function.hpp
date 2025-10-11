#pragma once

#if defined(_WIN32)
#include <RED4ext/Detail/win/Function.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Detail/mac/Function.hpp>
#else
#error Unsupported platform
#endif
