#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/CResource.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/CResource.hpp>
#else
#error Unsupported platform
#endif
