#pragma once

#if defined(_WIN32)
#include <RED4ext/win/ResourcePath.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/ResourcePath.hpp>
#else
#error Unsupported platform
#endif
