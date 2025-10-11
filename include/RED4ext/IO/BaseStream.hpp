#pragma once

#if defined(_WIN32)
#include <RED4ext/IO/win/BaseStream.hpp>
#elif defined(__APPLE__)
#include <RED4ext/IO/mac/BaseStream.hpp>
#else
#error Unsupported platform
#endif
