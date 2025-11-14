#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/RenderResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderProxyCustomData.hpp>

#include <cstdint>

namespace RED4ext
{
struct IRenderProxy
{
    using AllocatorType = Memory::RenderProxyAllocator;

    /*
     * Function name is kept the same as the Windows version, so the name may or may not reflect
     * the actual offset in the Mac build. However, the offset shown on the right is correct.
     *
     * If a function only exists in the Mac build, it is suffixed with "_MAC" with the actual
     * offset in the function name and on the right.
     *
     * It is possible that I am wrong. -Ariel
     */
    virtual void sub_00();             // 00
    virtual void sub_08();             // 08
    virtual ~IRenderProxy() = default; // 10
    //      ~IRenderProxy()                  // 18
    virtual uint8_t sub_18();                // 20
    virtual void sub_20();                   // 28
    virtual void sub_28();                   // 30
    virtual void sub_30();                   // 38
    virtual bool sub_38();                   // 40
    virtual bool sub_40();                   // 48
    virtual void sub_48();                   // 50
    virtual void sub_50();                   // 58
    virtual uint32_t sub_58();               // 60
    virtual float sub_60();                  // 68
    virtual uint8_t sub_68();                // 70
    virtual uint8_t sub_70();                // 78
    virtual void sub_80_MAC(void* a1);       // 80 // Mac build only
    virtual void sub_78(void* a1);           // 88
    virtual void sub_80(void* a1, void* a2); // 90
    virtual bool sub_88(void* a1, void* a2); // 98
    virtual void sub_90(void* a1);           // A0
    virtual void sub_98(void* a1);           // A8
    virtual void sub_A0();                   // B0
    virtual uint8_t sub_A8(void* a1);        // B8
    virtual void sub_B0(void* a1);           // C0
    virtual bool sub_B8();                   // C8
    virtual bool sub_C0();                   // D0
    virtual uint8_t sub_C8();                // D8
    virtual uint8_t sub_D0();                // E0
    virtual uint8_t sub_D8();                // E8
    virtual uint8_t sub_E0();                // F0
    virtual void sub_E8();                   // F8
    virtual void sub_F0();                   // 100

    uint8_t unk08[0x48 - 0x08];         // 08
    IRenderProxyCustomData* customData; // 48
    uint8_t unk50[0x98 - 0x50];         // 50
};
RED4EXT_ASSERT_SIZE(IRenderProxy, 0x98);
RED4EXT_ASSERT_OFFSET(IRenderProxy, customData, 0x48);

struct RenderProxyBase : IRenderProxy
{
    virtual void sub_F8() = 0; // F8
};
RED4EXT_ASSERT_SIZE(RenderProxyBase, 0x98);

struct CRenderProxy : RenderProxyBase
{
    uint8_t unk98[0xb8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(CRenderProxy, 0xb8);

struct CRenderProxy_Mesh : CRenderProxy
{
    uint8_t unkB8[0xd8 - 0xb8];  // B8
    CRenderMesh* renderMesh;     // D8
    uint8_t unkE0[0x1c0 - 0xe0]; // E0
};
RED4EXT_ASSERT_SIZE(CRenderProxy_Mesh, 0x1c0);
RED4EXT_ASSERT_OFFSET(CRenderProxy_Mesh, renderMesh, 0xD8);

struct CRenderProxyHandle
{
    virtual ~CRenderProxyHandle() = default; // 00

    uint8_t unk08[0x10 - 0x08]; // 08
    IRenderProxy* renderProxy;  // 10
    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CRenderProxyHandle, 0x28);
RED4EXT_ASSERT_OFFSET(CRenderProxyHandle, renderProxy, 0x10);
} // namespace RED4ext
