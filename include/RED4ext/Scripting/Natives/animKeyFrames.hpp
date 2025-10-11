#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/animKeyFrames.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/animKeyFrames.hpp>
#else
#error Unsupported platform
#endif
