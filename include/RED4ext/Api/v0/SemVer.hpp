#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/v0/win/SemVer.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/v0/mac/SemVer.hpp>
#else
#error Unsupported platform
#endif
