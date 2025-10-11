#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/v0/win/SemVer-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/v0/mac/SemVer-inl.hpp>
#else
#error Unsupported platform
#endif
