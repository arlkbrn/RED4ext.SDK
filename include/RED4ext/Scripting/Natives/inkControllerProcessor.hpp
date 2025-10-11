#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/inkControllerProcessor.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/inkControllerProcessor.hpp>
#else
#error Unsupported platform
#endif
