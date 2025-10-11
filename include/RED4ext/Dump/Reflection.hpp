#pragma once

#if defined(_WIN32)
#include <RED4ext/Dump/win/Reflection.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Dump/mac/Reflection.hpp>
#else
#error Unsupported platform
#endif
