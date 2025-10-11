#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gamePersistentID.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gamePersistentID.hpp>
#else
#error Unsupported platform
#endif
