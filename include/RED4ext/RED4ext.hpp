#pragma once

#if defined(_WIN32)
#include <RED4ext/win/RED4ext.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/RED4ext.hpp>
#else
#error Unsupported platform
#endif
