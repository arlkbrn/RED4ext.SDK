#pragma once

#if defined(_WIN32)
#include <RED4ext/Memory/win/Vault-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Memory/mac/Vault-inl.hpp>
#else
#error Unsupported platform
#endif
