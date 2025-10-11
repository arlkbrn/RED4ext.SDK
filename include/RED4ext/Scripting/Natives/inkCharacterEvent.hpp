#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/inkCharacterEvent.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/inkCharacterEvent.hpp>
#else
#error Unsupported platform
#endif
