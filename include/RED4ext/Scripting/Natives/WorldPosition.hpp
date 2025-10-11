#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/WorldPosition.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/WorldPosition.hpp>
#else
#error Unsupported platform
#endif
