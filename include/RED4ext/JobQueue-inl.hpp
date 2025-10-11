#pragma once

#if defined(_WIN32)
#include <RED4ext/win/JobQueue-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/mac/JobQueue-inl.hpp>
#else
#error Unsupported platform
#endif
