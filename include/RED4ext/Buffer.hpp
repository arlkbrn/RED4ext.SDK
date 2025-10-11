#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Buffer.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Buffer.hpp>
#else
#error Unsupported platform
#endif
