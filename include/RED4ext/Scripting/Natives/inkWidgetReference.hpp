#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/inkWidgetReference.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/inkWidgetReference.hpp>
#else
#error Unsupported platform
#endif
