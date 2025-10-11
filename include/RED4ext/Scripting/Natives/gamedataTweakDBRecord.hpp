#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gamedataTweakDBRecord.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gamedataTweakDBRecord.hpp>
#else
#error Unsupported platform
#endif
