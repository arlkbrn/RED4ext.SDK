#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/IMaterial.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/IMaterial.hpp>
#else
#error Unsupported platform
#endif
