#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/inkIWidgetComponentWrapper.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/inkIWidgetComponentWrapper.hpp>
#else
#error Unsupported platform
#endif
