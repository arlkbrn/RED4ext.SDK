#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/entEntityTemplate.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/entEntityTemplate.hpp>
#else
#error Unsupported platform
#endif
