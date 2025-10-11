#pragma once

#if defined(_WIN32)
#include <RED4ext/win/GameEngine-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/GameEngine-inl.hpp>
#else
#error Unsupported platform
#endif
