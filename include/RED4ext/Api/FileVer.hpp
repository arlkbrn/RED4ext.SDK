#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/win/FileVer.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/mac/FileVer.hpp>
#else
#error Unsupported platform
#endif
