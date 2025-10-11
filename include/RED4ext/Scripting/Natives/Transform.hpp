#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/Transform.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/Transform.hpp>
#else
#error Unsupported platform
#endif
