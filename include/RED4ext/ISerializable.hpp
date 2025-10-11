#pragma once

#if defined(_WIN32)
#include <RED4ext/win/ISerializable.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/ISerializable.hpp>
#else
#error Unsupported platform
#endif
