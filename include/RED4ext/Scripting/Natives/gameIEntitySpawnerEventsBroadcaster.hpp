#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gameIEntitySpawnerEventsBroadcaster.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gameIEntitySpawnerEventsBroadcaster.hpp>
#else
#error Unsupported platform
#endif
