#pragma once

#if defined(_WIN32)
#include <RED4ext/win/GameEngine.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/GameEngine.hpp>
#else
#error Unsupported platform
#endif
