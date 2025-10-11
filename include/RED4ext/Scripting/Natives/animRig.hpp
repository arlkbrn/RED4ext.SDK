#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/animRig.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/animRig.hpp>
#else
#error Unsupported platform
#endif
