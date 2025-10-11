#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/inkDrawArea.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/inkDrawArea.hpp>
#else
#error Unsupported platform
#endif
