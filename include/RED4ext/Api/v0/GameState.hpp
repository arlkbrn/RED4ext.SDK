#pragma once

#if defined(_WIN32)
#include <RED4ext/Api/v0/win/GameState.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Api/v0/mac/GameState.hpp>
#else
#error Unsupported platform
#endif
