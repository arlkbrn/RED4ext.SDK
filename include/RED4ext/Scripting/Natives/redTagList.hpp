#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/redTagList.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/redTagList.hpp>
#else
#error Unsupported platform
#endif
