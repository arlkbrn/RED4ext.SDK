#pragma once

/*
 * Format is based on RED4ext's implementation of Addresses.hpp prior to implementing universal hashes.
 * [https://github.com/wopss/RED4ext.SDK/blob/94e1a89f622d23dd666b04e1bbfc9422d372088e/include/RED4ext/Addresses.hpp]
 */
#include <cstdint>

// Addresses for Cyberpunk 2077, version 2.31, Mac, bundle 5314028, build 5314055.
// clang-format off
namespace RED4ext::Detail::Addresses
{
constexpr uintptr_t ImageBase = 0x100000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_Handlers = 0x10900b790 - ImageBase;
constexpr uintptr_t CBaseFunction_ExecuteScripted = 0x102172bf4 - ImageBase;
constexpr uintptr_t CBaseFunction_ExecuteNative = 0x1021732dc - ImageBase;
constexpr uintptr_t CBaseFunction_InternalExecute = 0x102173120 - ImageBase;
#pragma endregion

#pragma region CBaseRTTIType
constexpr uintptr_t CBaseRTTIType_sub_80 = 0x1021afd4c - ImageBase; // [rtti::IType::SerializeToText]
constexpr uintptr_t CBaseRTTIType_sub_88 = 0x1021afe0c - ImageBase; // [rtti::IType::SerializeFromText]
constexpr uintptr_t CBaseRTTIType_sub_90 = 0x1021afed4 - ImageBase; // [rtti::IType::ReadValue]
constexpr uintptr_t CBaseRTTIType_sub_98 = 0x1021b007c - ImageBase; // [rtti::IType::WriteValue]
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0x1021b01e0 - ImageBase;
#pragma endregion

#pragma region CBitfield
constexpr uintptr_t CBitfield_Unserialize = 0x1021967a0 - ImageBase; // [rtti::BitFieldType::Serialize ?]
constexpr uintptr_t CBitfield_ToString = 0x102e91360 - ImageBase; // [rtti::BitFieldType::ToString]
constexpr uintptr_t CBitfield_FromString = 0x102196a2c - ImageBase; // [rtti:BitFieldType::FromString]
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_Unserialize = 0x102e94410 - ImageBase; // [rtti::ClassType::Serialize] /!
constexpr uintptr_t CClass_ToString = 0x1021975e4 - ImageBase; // [rtti::ClassType::ToString]
constexpr uintptr_t CClass_sub_80 = 0x102199b14 - ImageBase;
constexpr uintptr_t CClass_sub_88 = 0x102199d1c - ImageBase;
constexpr uintptr_t CClass_sub_90 = 0x102199548 - ImageBase;
constexpr uintptr_t CClass_sub_98 = 0x1021996c0 - ImageBase;
constexpr uintptr_t CClass_sub_A0 = 0x102199880 - ImageBase;
constexpr uintptr_t CClass_sub_B0 = 0x10219e390 - ImageBase;
constexpr uintptr_t CClass_sub_C0 = 0x10219a254 - ImageBase;
constexpr uintptr_t CClass_GetMaxAlignment = 0x102199f48 - ImageBase;
constexpr uintptr_t CClass_sub_D0 = 0x10219a3e8 - ImageBase;
constexpr uintptr_t CClass_CreateInstance = 0x102197aac - ImageBase; // [rtti::ClassType::CreateObject]
constexpr uintptr_t CClass_GetProperty = 0x102198b40 - ImageBase; // [rtti::ClassType::GetProperty]
constexpr uintptr_t CClass_GetProperties = 0x102197928 - ImageBase; // [rtti::ClassType::GetProperties]
constexpr uintptr_t CClass_ClearScriptedData = 0x102198888 - ImageBase; // [rtti::ClassType::ClearScriptData]
constexpr uintptr_t CClass_InitializeProperties = 0x102197be4 - ImageBase; // [rtti::ClassType::InitializeScriptedProperties]
constexpr uintptr_t CClass_AssignDefaultValuesToProperties = 0x102197d40 - ImageBase; // [rtti::ClassType::InitializeScriptDefaultValues]
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x102173760 - ImageBase;
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x102173864 - ImageBase;
#pragma endregion

#pragma region CEnum
constexpr uintptr_t CEnum_Unserialize = 0x1021a39b0 - ImageBase;
constexpr uintptr_t CEnum_ToString = 0x1021a3bc0 - ImageBase;
constexpr uintptr_t CEnum_FromString = 0x10306eca8 - ImageBase;
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x1090dc3a0 - ImageBase;
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x1021739e8 - ImageBase;
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x103452ddc - ImageBase;
constexpr uintptr_t CNamePool_AddCString = 0x1048b7c60 - ImageBase;
constexpr uintptr_t CNamePool_AddPair = 0x103452da0 - ImageBase;
constexpr uintptr_t CNamePool_Get = 0x103452d7c - ImageBase;
#pragma endregion

#pragma region CommandListContext
/* Need to find Metal equivalents */
#pragma endregion

#pragma region CRTTIRegistrator
constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = 0x107d69e50 - ImageBase;
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0x1021af014 - ImageBase;
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0x1021af338 - ImageBase;
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x102188e8c - ImageBase;
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_vtbl = 0x106ffaea0 - ImageBase;
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_dtor = 0x100029228 - ImageBase;
constexpr uintptr_t CString_ctor_span = 0x10002940c - ImageBase;
constexpr uintptr_t CString_copy = 0x10002aacc - ImageBase;
constexpr uintptr_t CString_ctor_str = 0x10002cdb8 - ImageBase;
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x1000286e8 - ImageBase; // [red::DynamicBuffer::ResizeBuffer]
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x102104788 - ImageBase;
constexpr uintptr_t Handle_DecWeakRef = 0x100914668 - ImageBase;
#pragma endregion

#pragma region IRenderProxy
constexpr uintptr_t IRenderProxy_sub_00 = 0x106efb228 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_08 = 0x1016a386c - ImageBase;
constexpr uintptr_t IRenderProxy_sub_18 = 0x100e89c18 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_58 = 0x100e89c24 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_60 = 0x100e89c2c - ImageBase;
constexpr uintptr_t IRenderProxy_sub_78 = 0x101010b2c - ImageBase;
constexpr uintptr_t IRenderProxy_sub_80 = 0x101010b5c - ImageBase;
constexpr uintptr_t IRenderProxy_sub_88 = 0x101010d20 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_90 = 0x101010e68 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_98 = 0x101010fec - ImageBase;
constexpr uintptr_t IRenderProxy_sub_A8 = 0x101011014 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_B0 = 0x101010c98 - ImageBase;
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_sub_D8 = 0x102238918 - ImageBase;
constexpr uintptr_t IScriptable_DestructValueHolder = 0x1022384bc - ImageBase;
#pragma endregion

#pragma region ISerializable
constexpr uintptr_t ISerializable_sub_30 = 0x102186078 - ImageBase;
constexpr uintptr_t ISerializable_sub_40 = 0x102185f34 - ImageBase; // [ISerializable::OnSerialize()]
constexpr uintptr_t ISerializable_sub_78 = 0x1021862cc - ImageBase;
constexpr uintptr_t ISerializable_sub_A0 = 0x102186230 - ImageBase;
constexpr uintptr_t ISerializable_sub_C0 = 0x102186208 - ImageBase;
constexpr uintptr_t ISerializable_Counter = 0x10900b4f8 - ImageBase;
#pragma endregion

#pragma region JobDispatcher
constexpr uintptr_t JobDispatcher = 0x108dc7ff0 - ImageBase;
constexpr uintptr_t JobDispatcher_DispatchJob = 0x1009d46f0 - ImageBase;
#pragma endregion

#pragma region JobHandle
constexpr uintptr_t JobHandle_dtor = 0x1009d4a00 - ImageBase;
constexpr uintptr_t JobHandle_Join = 0x1009d4a3c - ImageBase;
#pragma endregion

#pragma region JobInternalHandle
constexpr uintptr_t JobInternalHandle_Acquire = 0x1009d4824 - ImageBase;
#pragma endregion

#pragma region JobQueue
constexpr uintptr_t JobQueue_ctor_FromGroup = 0x1009d4374 - ImageBase;
constexpr uintptr_t JobQueue_ctor_FromParams = 0x1009d420c - ImageBase;
constexpr uintptr_t JobQueue_dtor = 0x1009d4660 - ImageBase;
constexpr uintptr_t JobQueue_Capture = 0x1009d4590 - ImageBase;
constexpr uintptr_t JobQueue_SyncWait = 0x1009d451c - ImageBase;
#pragma endregion

#pragma region Memory
constexpr uintptr_t Memory_Vault = 0x1074c0f80 - ImageBase;
constexpr uintptr_t Memory_Vault_Alloc = 0x10000f7a4 - ImageBase;
constexpr uintptr_t Memory_Vault_AllocAligned = 0x10000f858 - ImageBase;
constexpr uintptr_t Memory_Vault_Realloc = 0x10000f944 - ImageBase;
constexpr uintptr_t Memory_Vault_ReallocAligned = 0x10000ffac - ImageBase;
constexpr uintptr_t Memory_Vault_Free = 0x10000fb0c - ImageBase;
constexpr uintptr_t Memory_Vault_Unk1 = 0x100010490 - ImageBase; // [red::memory::DefaultAllocator::GetBlockSize()]
constexpr uintptr_t Memory_PoolStorage_OOM = 0x100024184 - ImageBase; // [red::memory::HandleAllocateFailure()]
#pragma endregion

#pragma region OpcodeHandlers
constexpr uintptr_t OpcodeHandlers = 0x10908b798 - ImageBase;
#pragma endregion

#pragma region ObjectPackageExtractor
constexpr uintptr_t ObjectPackageExtractor_Initialize = 0x102150648 - ImageBase;
constexpr uintptr_t ObjectPackageExtractor_ExtractSync = 0x102150ce4 - ImageBase;
constexpr uintptr_t ObjectPackageExtractor_ExtractAsync = 0x100caaa74 - ImageBase;
#pragma endregion

#pragma region ObjectPackageReader
constexpr uintptr_t ObjectPackageReader_ctor = 0x100caaa10 - ImageBase;
constexpr uintptr_t ObjectPackageReader_OnReadHeader = 0x100caab24 - ImageBase; // No XREFs to confirm. Needs to be tested
constexpr uintptr_t ObjectPackageReader_ReadHeader = 0x100caaa74 - ImageBase;
#pragma endregion

#pragma region BasePackageReader
constexpr uintptr_t BasePackageReader_ReadHeader = 0x10214fa38 - ImageBase;
#pragma endregion

#pragma region ResourceDepot
constexpr uintptr_t ResourceDepot = 0x107d6c538 - ImageBase;
#pragma endregion

#pragma region ResourceLoader
constexpr uintptr_t ResourceLoader = 0x10900b580 - ImageBase;
constexpr uintptr_t ResourceLoader_FindTokenFast = 0x1021b80f4 - ImageBase; // [res::ResourceLoader::TryAcquireResourceToken_NoLock]
constexpr uintptr_t ResourceLoader_IssueLoadingRequest = 0x1021b71cc - ImageBase; // [res::ResourceLoader::IssueLoadingRequest]
constexpr uintptr_t ResourceLoader_IssueLoadingRequestByPath = 0x1021b7130 - ImageBase;
#pragma endregion

#pragma region ResourceReference
// constexpr uintptr_t ResourceReference_Load = 0x0 - ImageBase; [Hash may be wrong?]
constexpr uintptr_t ResourceReference_Fetch = 0x1021c9934 - ImageBase;
// constexpr uintptr_t ResourceReference_Reset = 0x0 - ImageBase; [Inlined?]
#pragma endregion

#pragma region ResourceToken
constexpr uintptr_t ResourceToken_dtor = 0x10468daf0 - ImageBase;
constexpr uintptr_t ResourceToken_Fetch = 0x1021c4d4c - ImageBase; // [res::ResourceToken::WaitUntilLoaded]
constexpr uintptr_t ResourceToken_OnLoaded = 0x1021c4e84 - ImageBase; // [res::ResourceToken::OnLoaded]
constexpr uintptr_t ResourceToken_CancelUnk38 = 0x10418fb00 - ImageBase; // Low confidence
// constexpr uintptr_t ResourceToken_DestructUnk38 = 0x0 - ImageBase; [Inlined?]
#pragma endregion

#pragma region TTypedClass
constexpr uintptr_t TTypedClass_IsEqual = 0x102197fe4 - ImageBase; // [rtti::ClassType::DeepCompare()]
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x102b73c7c - ImageBase;
constexpr uintptr_t TweakDB_CreateRecord = 0x1026b8db8 - ImageBase; // Low confidence
#pragma endregion

#pragma region DeferredDataBuffer
constexpr uintptr_t DeferredDataBuffer_LoadAsync = 0x10226258c - ImageBase;
constexpr uintptr_t DeferredDataBuffer_LoadRefAsync = 0x10226276c - ImageBase;
#pragma endregion

#pragma region UpdateRegistrar
constexpr uintptr_t UpdateRegistrar_RegisterGroupUpdate = 0x103d95800 - ImageBase;
constexpr uintptr_t UpdateRegistrar_RegisterBucketUpdate = 0x103d95924 - ImageBase;
#pragma endregion

#pragma region LaunchParameters
constexpr uintptr_t LaunchParameters = 0x10830a3e0 - ImageBase;
#pragma endregion

} // namespace RED4ext::Addresses
// clang-format on
