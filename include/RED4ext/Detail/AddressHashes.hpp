#pragma once

#if defined(_WIN32)
#include <RED4ext/Detail/win/AddressHashes.hpp>
#elif defined(__APPLE__)
#error Address hashes are not available in the Mac build. Did you mean to include Addresses.hpp?
#else
#error Unsupported platform
#endif
