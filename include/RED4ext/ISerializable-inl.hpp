#pragma once

#if defined(_WIN32)
#include <RED4ext/win/ISerializable-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/ISerializable-inl.hpp>
#else
#error Unsupported platform
#endif
