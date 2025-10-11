#pragma once

#if defined(_WIN32)
#include <RED4ext/Detail/win/Callback.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Detail/mac/Callback.hpp>
#else
#error Unsupported platform
#endif
