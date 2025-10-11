#pragma once

#if defined(_WIN32)
#include <RED4ext/Scripting/Natives/win/gameIAttachmentSlotsListener-inl.hpp>
#elif defined(__APPLE__)
#include <RED4ext/Scripting/Natives/mac/gameIAttachmentSlotsListener-inl.hpp>
#else
#error Unsupported platform
#endif
