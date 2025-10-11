#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gameIPopulationSystem.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gameIPopulationSystem.hpp>
#else
#error Unsupported platform
#endif
