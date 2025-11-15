#pragma once

#if defined(_WIN32)
#error Addresses are not available directly in the Windows build. Did you mean to include AddressesHashes.hpp?
#elif defined(__APPLE__)
#include <RED4ext/Detail/mac/Addresses.hpp>
#else
#error Unsupported platform
#endif
