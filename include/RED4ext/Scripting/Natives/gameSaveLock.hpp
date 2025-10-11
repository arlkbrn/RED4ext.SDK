#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gameSaveLock.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gameSaveLock.hpp>
#else
#error Unsupported platform
#endif
