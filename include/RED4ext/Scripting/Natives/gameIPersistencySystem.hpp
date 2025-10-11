#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gameIPersistencySystem.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gameIPersistencySystem.hpp>
#else
#error Unsupported platform
#endif
