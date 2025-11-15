#pragma once

/*
 * Format is based on RED4ext's implementation of Addresses.hpp prior to implementing universal hashes.
 * [https://github.com/wopss/RED4ext.SDK/blob/94e1a89f622d23dd666b04e1bbfc9422d372088e/include/RED4ext/Addresses.hpp]
 */
#include <cstdint>

// Addresses for Cyberpunk 2077 Mac Build, version 2.31.
// clang-format off
namespace RED4ext::Detail::Addresses
{
constexpr uintptr_t ImageBase = 0x100000000;

#pragma region CBaseFunction
constexpr uintptr_t CBaseFunction_Handlers = 0x1090153e0 - ImageBase;
constexpr uintptr_t CBaseFunction_ExecuteScripted = 0x102e6d83c - ImageBase;
constexpr uintptr_t CBaseFunction_ExecuteNative = 0x102e6df24 - ImageBase;
constexpr uintptr_t CBaseFunction_InternalExecute = 0x102e6dd68 - ImageBase;
#pragma endregion

#pragma region CBaseRTTIType
constexpr uintptr_t CBaseRTTIType_sub_80 = 0x102eaa460 - ImageBase; // [rtti::IType::SerializeToText]
constexpr uintptr_t CBaseRTTIType_sub_88 = 0x102eaa520 - ImageBase; // [rtti::IType::SerializeFromText]
constexpr uintptr_t CBaseRTTIType_sub_90 = 0x102eaa5e8 - ImageBase; // [rtti::IType::ReadValue]
constexpr uintptr_t CBaseRTTIType_sub_98 = 0x102eaa790 - ImageBase; // [rtti::IType::WriteValue]
constexpr uintptr_t CBaseRTTIType_sub_A0 = 0x102eaa8f4 - ImageBase;
#pragma endregion

#pragma region CBitfield
constexpr uintptr_t CBitfield_Unserialize = 0x102e911d0 - ImageBase; // [rtti::BitFieldType::Serialize ?]
constexpr uintptr_t CBitfield_ToString = 0x102e91360 - ImageBase; // [rtti::BitFieldType::ToString]
constexpr uintptr_t CBitfield_FromString = 0x102e9145c - ImageBase; // [rtti:BitFieldType::FromString]
#pragma endregion

#pragma region CClass
constexpr uintptr_t CClass_Unserialize = 0x102e94410 - ImageBase; // [rtti::ClassType::Serialize]
constexpr uintptr_t CClass_ToString = 0x102e92014 - ImageBase; // [rtti::ClassType::ToString]
constexpr uintptr_t CClass_sub_80 = 0x102e94544 - ImageBase;
constexpr uintptr_t CClass_sub_88 = 0x102e9474c - ImageBase;
constexpr uintptr_t CClass_sub_90 = 0x102e93f78 - ImageBase;
constexpr uintptr_t CClass_sub_98 = 0x102e940f0 - ImageBase;
constexpr uintptr_t CClass_sub_A0 = 0x102e942b0 - ImageBase;
constexpr uintptr_t CClass_sub_B0 = 0x102e98d4c - ImageBase;
constexpr uintptr_t CClass_sub_C0 = 0x102e94c84 - ImageBase;
constexpr uintptr_t CClass_GetMaxAlignment = 0x102e94978 - ImageBase;
constexpr uintptr_t CClass_sub_D0 = 0x102e94e18 - ImageBase;
constexpr uintptr_t CClass_CreateInstance = 0x102e924dc - ImageBase; // [rtti::ClassType::CreateObject]
constexpr uintptr_t CClass_GetProperty = 0x102e93570 - ImageBase; // [rtti::ClassType::GetProperty]
constexpr uintptr_t CClass_GetProperties = 0x102e92358 - ImageBase; // [rtti::ClassType::GetProperties]
constexpr uintptr_t CClass_ClearScriptedData = 0x102e932b8 - ImageBase; // [rtti::ClassType::ClearScriptData]
constexpr uintptr_t CClass_InitializeProperties = 0x102e92614 - ImageBase; // [rtti::ClassType::InitializeScriptedProperties]
constexpr uintptr_t CClass_AssignDefaultValuesToProperties = 0x102e92770  - ImageBase; // [rtti::ClassType::InitializeScriptDefaultValues]
#pragma endregion

#pragma region CClassFunction
constexpr uintptr_t CClassFunction_ctor = 0x102e6e3a8 - ImageBase;
#pragma endregion

#pragma region CClassStaticFunction
constexpr uintptr_t CClassStaticFunction_ctor = 0x102e6e4ac - ImageBase;
#pragma endregion

#pragma region CEnum
constexpr uintptr_t CEnum_Unserialize = 0x102e9e0b0 - ImageBase;
constexpr uintptr_t CEnum_ToString = 0x102e9e2c0 - ImageBase;
constexpr uintptr_t CEnum_FromString = 0x103ea8d2c - ImageBase;
#pragma endregion

#pragma region CGameEngine
constexpr uintptr_t CGameEngine = 0x14342ac00 - ImageBase;
#pragma endregion

#pragma region CGlobalFunction
constexpr uintptr_t CGlobalFunction_ctor = 0x102e6e630 - ImageBase;
#pragma endregion

#pragma region CNamePool
constexpr uintptr_t CNamePool_AddCstr = 0x1012ddbf4 - ImageBase;
constexpr uintptr_t CNamePool_AddCString = 0x101048eb4 - ImageBase;
constexpr uintptr_t CNamePool_AddPair = 0x1012ddbb8 - ImageBase;
constexpr uintptr_t CNamePool_Get = 0x1012ddb94 - ImageBase;
#pragma endregion

#pragma region CommandListContext
/* Need to find Metal equivalents */
#pragma endregion

#pragma region CRTTIRegistrator
constexpr uintptr_t CRTTIRegistrator_RTTIAsyncId = 0x1086ba590 - ImageBase;
#pragma endregion

#pragma region CRTTIScriptReferenceType
constexpr uintptr_t CRTTIScriptReferenceType_ctor = 0x102ea9728 - ImageBase;
constexpr uintptr_t CRTTIScriptReferenceType_Set = 0x102ea9a4c - ImageBase;
#pragma endregion

#pragma region CRTTISystem
constexpr uintptr_t CRTTISystem_Get = 0x102e83aac - ImageBase;
#pragma endregion

#pragma region CStack
constexpr uintptr_t CStack_vtbl = 0x107160908 - ImageBase;
#pragma endregion

#pragma region CString
constexpr uintptr_t CString_dtor = 0x100029e28 - ImageBase;
constexpr uintptr_t CString_ctor_span = 0x10002a00c - ImageBase;
constexpr uintptr_t CString_copy = 0x10002b6cc - ImageBase;
constexpr uintptr_t CString_ctor_str = 0x10002d9b8;
#pragma endregion

#pragma region DynArray
constexpr uintptr_t DynArray_Realloc = 0x1000292e8 - ImageBase; // [red::DynamicBuffer::ResizeBuffer]
#pragma endregion

#pragma region Handle
constexpr uintptr_t Handle_ctor = 0x102dff824 - ImageBase;
constexpr uintptr_t Handle_DecWeakRef = 0x100915268 - ImageBase;
#pragma endregion

#pragma region IRenderProxy
constexpr uintptr_t IRenderProxy_sub_00 = 0x106f857d0 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_08 = 0x100ea15fc - ImageBase;
constexpr uintptr_t IRenderProxy_sub_18 = 0x101548928 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_58 = 0x101548934 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_60 = 0x10154893c - ImageBase;
constexpr uintptr_t IRenderProxy_sub_78 = 0x1016ce1e8 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_80 = 0x1016ce218 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_88 = 0x1016ce3dc - ImageBase;
constexpr uintptr_t IRenderProxy_sub_90 = 0x1016ce524 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_98 = 0x1016ce6a8 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_A8 = 0x1016ce6d0 - ImageBase;
constexpr uintptr_t IRenderProxy_sub_B0 = 0x1016ce354 - ImageBase;
#pragma endregion

#pragma region IScriptable
constexpr uintptr_t IScriptable_sub_D8 = 0x102f34008 - ImageBase;
constexpr uintptr_t IScriptable_DestructValueHolder = 0x102f33bac - ImageBase;
#pragma endregion

#pragma region ISerializable
constexpr uintptr_t ISerializable_sub_30 = 0x102e80c98 - ImageBase;
constexpr uintptr_t ISerializable_sub_40 = 0x102e80b54 - ImageBase; // [ISerializable::OnSerialize()]
constexpr uintptr_t ISerializable_sub_78 = 0x102e80eec - ImageBase;
constexpr uintptr_t ISerializable_sub_A0 = 0x102e80e50 - ImageBase;
constexpr uintptr_t ISerializable_sub_C0 = 0x102e80e28 - ImageBase;
constexpr uintptr_t ISerializable_Counter = 0x109015148 - ImageBase;
#pragma endregion

#pragma region JobDispatcher
constexpr uintptr_t JobDispatcher = 0x10910dfa0 - ImageBase;
constexpr uintptr_t JobDispatcher_DispatchJob = 0x1048ef318 - ImageBase;
#pragma endregion

#pragma region JobHandle
constexpr uintptr_t JobHandle_dtor = 0x1048ef628 - ImageBase;
constexpr uintptr_t JobHandle_Join = 0x1048ef664 - ImageBase;
#pragma endregion

#pragma region JobInternalHandle
constexpr uintptr_t JobInternalHandle_Acquire = 0x1048ef44c - ImageBase;
#pragma endregion

#pragma region JobQueue
constexpr uintptr_t JobQueue_ctor_FromGroup = 0x1048eef9c;
constexpr uintptr_t JobQueue_ctor_FromParams = 0x1048eee34 - ImageBase;
constexpr uintptr_t JobQueue_dtor = 0x1048ef288 - ImageBase;
constexpr uintptr_t JobQueue_Capture = 0x1048ef1b8;
constexpr uintptr_t JobQueue_SyncWait = 0x1048ef144 - ImageBase;
#pragma endregion

#pragma region Memory
constexpr uintptr_t Memory_Vault = 0x1074c0fc0 - ImageBase;
constexpr uintptr_t Memory_Vault_Alloc = 0x1000103a4 - ImageBase;
constexpr uintptr_t Memory_Vault_AllocAligned = 0x100010458 - ImageBase;
constexpr uintptr_t Memory_Vault_Realloc = 0x100010544 - ImageBase;
constexpr uintptr_t Memory_Vault_ReallocAligned = 0x100010bac - ImageBase;
constexpr uintptr_t Memory_Vault_Free = 0x10001070c - ImageBase;
constexpr uintptr_t Memory_Vault_Unk1 = 0x100011090 - ImageBase; // [red::memory::DefaultAllocator::GetBlockSize()]
constexpr uintptr_t Memory_PoolStorage_OOM = 0x100024d84 - ImageBase; // [red::memory::HandleAllocateFailure()]
#pragma endregion

#pragma region OpcodeHandlers
constexpr uintptr_t OpcodeHandlers = 0x1090953e8 - ImageBase;
#pragma endregion

#pragma region ObjectPackageExtractor
constexpr uintptr_t ObjectPackageExtractor_Initialize = 0x102e4b4c0 - ImageBase;
constexpr uintptr_t ObjectPackageExtractor_ExtractSync = 0x102e4bb5c - ImageBase;
constexpr uintptr_t ObjectPackageExtractor_ExtractAsync = 0x102e4b8d8 - ImageBase;
#pragma endregion

#pragma region ObjectPackageReader
constexpr uintptr_t ObjectPackageReader_ctor = 0x10480b5d4 - ImageBase;
constexpr uintptr_t ObjectPackageReader_OnReadHeader = 0x10480b6e8 - ImageBase; // No XREFs to confirm. Needs to be tested
constexpr uintptr_t ObjectPackageReader_ReadHeader = 0x10480b638 - ImageBase;
#pragma endregion

#pragma region BasePackageReader
constexpr uintptr_t BasePackageReader_ReadHeader = 0x102e4a8b0 - ImageBase;
#pragma endregion

#pragma region ResourceDepot
constexpr uintptr_t ResourceDepot = 0x1086bcc78 - ImageBase;
#pragma endregion

#pragma region ResourceLoader
constexpr uintptr_t ResourceLoader = 0x1090151d0 - ImageBase;
constexpr uintptr_t ResourceLoader_FindTokenFast = 0x102eb2804 - ImageBase; // [res::ResourceLoader::TryAcquireResourceToken_NoLock]
constexpr uintptr_t ResourceLoader_IssueLoadingRequest = 0x1401de50c - ImageBase; // [res::ResourceLoader::IssueLoadingRequest]
constexpr uintptr_t ResourceLoader_IssueLoadingRequestByPath = 0x102eb1840 - ImageBase;
#pragma endregion

#pragma region ResourceReference
// constexpr uintptr_t ResourceReference_Load = 0x0 - ImageBase; [Hash may be wrong?]
constexpr uintptr_t ResourceReference_Fetch = 0x102ec3f04 - ImageBase;
// constexpr uintptr_t ResourceReference_Reset = 0x0 - ImageBase; [Inlined?]
#pragma endregion

#pragma region ResourceToken
constexpr uintptr_t ResourceToken_dtor = 0x103c87600 - ImageBase;
constexpr uintptr_t ResourceToken_Fetch = 0x102ebf31c - ImageBase; // [res::ResourceToken::WaitUntilLoaded]
constexpr uintptr_t ResourceToken_OnLoaded = 0x102ebf454 - ImageBase; // [res::ResourceToken::OnLoaded]
constexpr uintptr_t ResourceToken_CancelUnk38 = 0x100c4b9b0 - ImageBase; //  Low confidence
// constexpr uintptr_t ResourceToken_DestructUnk38 = 0x0 - ImageBase; [Inlined?]
#pragma endregion

#pragma region TTypedClass
constexpr uintptr_t TTypedClass_IsEqual = 0x102e92a14 - ImageBase; // [rtti::ClassType::DeepCompare()]
#pragma endregion

#pragma region TweakDB
constexpr uintptr_t TweakDB_Get = 0x103b38b38 - ImageBase;
constexpr uintptr_t TweakDB_CreateRecord = 0x10367e344 - ImageBase; // Low confidence
#pragma endregion

#pragma region DeferredDataBuffer
constexpr uintptr_t DeferredDataBuffer_LoadAsync = 0x102f5e040 - ImageBase;
constexpr uintptr_t DeferredDataBuffer_LoadRefAsync = 0x102f5e220 - ImageBase;
#pragma endregion

#pragma region UpdateRegistrar
constexpr uintptr_t UpdateRegistrar_RegisterGroupUpdate = 0x101e4e4d8 - ImageBase;
constexpr uintptr_t UpdateRegistrar_RegisterBucketUpdate = 0x101e4e5fc - ImageBase;
#pragma endregion

#pragma region LaunchParameters
constexpr uintptr_t LaunchParameters = 0x10796c2b0 - ImageBase;
#pragma endregion

} // namespace RED4ext::Addresses
// clang-format on
