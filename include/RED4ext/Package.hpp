#pragma once

#if defined(_WIN32)
#include <RED4ext/win/Package.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/Package.hpp>
#else
#error Unsupported platform
#endif
