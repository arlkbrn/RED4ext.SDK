#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/TLS.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>
#include <mach-o/dyld.h>

extern "C"
{
    void* __tlv_bootstrap(void** descriptor);
}

RED4EXT_INLINE RED4ext::TLS* RED4ext::TLS::Get()
{
    static UniversalRelocPtr<void*> tlvDescriptor(Detail::AddressHashes::TLS_Descriptor);

    using TLVBootstrap_t = void* (*)(void*);
    TLVBootstrap_t bootstrap = reinterpret_cast<TLVBootstrap_t>(__tlv_bootstrap);

    return static_cast<TLS*>(bootstrap(tlvDescriptor.GetAddr()));
}
