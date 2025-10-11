#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/Vector3.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/Vector3.hpp>
#else
#error Unsupported platform
#endif
