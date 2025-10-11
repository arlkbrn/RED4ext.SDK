#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/CMesh.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/CMesh.hpp>
#else
#error Unsupported platform
#endif
