#pragma once

#if defined(_WIN32)
#include <RED4ext/win/TweakDB.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/TweakDB.hpp>
#else
#error Unsupported platform
#endif
