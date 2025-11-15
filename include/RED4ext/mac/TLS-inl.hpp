#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/TLS.hpp>
#endif

#include <RED4ext/Detail/Addresses.hpp>
#include <RED4ext/Relocation.hpp>
#include <mach-o/dyld.h>

RED4EXT_INLINE RED4ext::TLS* RED4ext::TLS::Get()
{
    // TODO: Implement TLS
    return nullptr;
}
