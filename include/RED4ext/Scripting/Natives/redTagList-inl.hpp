#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/redTagList-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/redTagList-inl.hpp>
#else
#error Unsupported platform
#endif
