#pragma once

#if defined(_WIN32)
#include <RED4ext/Detail/win/AddressHashes.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Detail/mac/AddressHashes.hpp>
#else
#error Unsupported platform
#endif
