#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GameEngine.hpp>
#endif

#include <RED4ext/Detail/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CGameEngine* RED4ext::CGameEngine::Get()
{
    static UniversalRelocPtr<CGameEngine*> ptr(Detail::Addresses::CGameEngine);
    return ptr;
}
