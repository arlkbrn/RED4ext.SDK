#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/IUpdatableSystem-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/IUpdatableSystem-inl.hpp>
#else
#error Unsupported platform
#endif
