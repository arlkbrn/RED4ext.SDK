#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gameIDynamicEntityIDSystem.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gameIDynamicEntityIDSystem.hpp>
#else
#error Unsupported platform
#endif
