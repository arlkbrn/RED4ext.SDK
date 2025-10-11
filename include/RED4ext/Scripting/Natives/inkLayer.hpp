#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/inkLayer.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/inkLayer.hpp>
#else
#error Unsupported platform
#endif
