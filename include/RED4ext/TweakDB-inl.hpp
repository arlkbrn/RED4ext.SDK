#pragma once

#if defined(_WIN32)
#include <RED4ext/win/TweakDB-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/TweakDB-inl.hpp>
#else
#error Unsupported platform
#endif
