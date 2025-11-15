#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/ResourceDepot.hpp>
#endif

#include <RED4ext/Detail/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::ResourceDepot* RED4ext::ResourceDepot::Get()
{
    static UniversalRelocPtr<ResourceDepot*> ptr(Detail::Addresses::ResourceDepot);
    return ptr;
}
