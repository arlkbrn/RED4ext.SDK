#pragma once

#if defined(_WIN32)
#include <RED4ext/win/GameStates.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/GameStates.hpp>
#else
#error Unsupported platform
#endif
