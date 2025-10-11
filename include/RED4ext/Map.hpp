#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Map.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Map.hpp>
#else
#error Unsupported platform
#endif
