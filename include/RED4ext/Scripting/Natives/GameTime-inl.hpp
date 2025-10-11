#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/GameTime-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/GameTime-inl.hpp>
#else
#error Unsupported platform
#endif
