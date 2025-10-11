#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/Quaternion.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/Quaternion.hpp>
#else
#error Unsupported platform
#endif
