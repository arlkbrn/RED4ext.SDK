#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/win/OpcodeHandlers.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/mac/OpcodeHandlers.hpp>
#else
#error Unsupported platform
#endif
