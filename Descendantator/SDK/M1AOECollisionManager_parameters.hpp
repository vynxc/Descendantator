#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1AOECollisionManager

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function M1AOECollisionManager.M1AOECollisionManager_C.BeginOverlapEvent
// 0x00C0 (0x00C0 - 0x0000)
struct M1AOECollisionManager_C_BeginOverlapEvent final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x009C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(M1AOECollisionManager_C_BeginOverlapEvent) == 0x000008, "Wrong alignment on M1AOECollisionManager_C_BeginOverlapEvent");
static_assert(sizeof(M1AOECollisionManager_C_BeginOverlapEvent) == 0x0000C0, "Wrong size on M1AOECollisionManager_C_BeginOverlapEvent");
static_assert(offsetof(M1AOECollisionManager_C_BeginOverlapEvent, OverlappedComponent) == 0x000000, "Member 'M1AOECollisionManager_C_BeginOverlapEvent::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_BeginOverlapEvent, OtherActor) == 0x000008, "Member 'M1AOECollisionManager_C_BeginOverlapEvent::OtherActor' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_BeginOverlapEvent, OtherComp) == 0x000010, "Member 'M1AOECollisionManager_C_BeginOverlapEvent::OtherComp' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_BeginOverlapEvent, OtherBodyIndex) == 0x000018, "Member 'M1AOECollisionManager_C_BeginOverlapEvent::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_BeginOverlapEvent, bFromSweep) == 0x00001C, "Member 'M1AOECollisionManager_C_BeginOverlapEvent::bFromSweep' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_BeginOverlapEvent, SweepResult) == 0x000020, "Member 'M1AOECollisionManager_C_BeginOverlapEvent::SweepResult' has a wrong offset!");

// Function M1AOECollisionManager.M1AOECollisionManager_C.EndOverlapEvent
// 0x0020 (0x0020 - 0x0000)
struct M1AOECollisionManager_C_EndOverlapEvent final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(M1AOECollisionManager_C_EndOverlapEvent) == 0x000008, "Wrong alignment on M1AOECollisionManager_C_EndOverlapEvent");
static_assert(sizeof(M1AOECollisionManager_C_EndOverlapEvent) == 0x000020, "Wrong size on M1AOECollisionManager_C_EndOverlapEvent");
static_assert(offsetof(M1AOECollisionManager_C_EndOverlapEvent, OverlappedComponent) == 0x000000, "Member 'M1AOECollisionManager_C_EndOverlapEvent::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_EndOverlapEvent, OtherActor) == 0x000008, "Member 'M1AOECollisionManager_C_EndOverlapEvent::OtherActor' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_EndOverlapEvent, OtherComp) == 0x000010, "Member 'M1AOECollisionManager_C_EndOverlapEvent::OtherComp' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_EndOverlapEvent, OtherBodyIndex) == 0x000018, "Member 'M1AOECollisionManager_C_EndOverlapEvent::OtherBodyIndex' has a wrong offset!");

// Function M1AOECollisionManager.M1AOECollisionManager_C.ExecuteUbergraph_M1AOECollisionManager
// 0x02B8 (0x02B8 - 0x0000)
struct M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent_1;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor_1;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp_1;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex_1;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bFromSweep;                     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_SweepResult;                    // 0x0028(0x009C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent;            // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidTags_ReturnValue;                  // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityIDList                       CallFunc_Map_Find_Value;                           // 0x00F0(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityId                           CallFunc_Array_Get_Item;                           // 0x0108(0x0010)(HasGetValueTypeHash)
	TScriptInterface<class IM1AbilityBase>        CallFunc_EndStatusEffectToTarget_self_CastInput;   // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable;                              // 0x0168(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IM1AbilityBase>        CallFunc_NetMulticast_SpawnHitFXsForAbility_self_CastInput; // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Temp_name_Variable;                                // 0x0198(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AA[0x6];                                      // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Temp_name_Variable_1;                              // 0x01B0(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IM1AbilityBase>        CallFunc_BP_MakeForwardingContext_self_CastInput;  // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x01D8(0x0010)()
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable_1;                            // 0x01E8(0x0010)(ConstParm, ReferenceParm)
	TScriptInterface<class IM1AbilityBase>        CallFunc_InvokeAllStatusEffectToTargetByTag_self_CastInput; // 0x01F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FM1AbilityId>                   CallFunc_InvokeAllStatusEffectToTargetByTag_ReturnValue; // 0x0208(0x0010)(ReferenceParm)
	struct FM1AbilityIDList                       K2Node_MakeStruct_M1AbilityIDList;                 // 0x0218(0x0010)()
	TScriptInterface<class IM1AbilityBase>        CallFunc_BP_ExecuteOperationsToTargetByTag_self_CastInput; // 0x0228(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckActorRelations_ReturnValue;          // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidTags_ReturnValue_1;                // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x023C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0250(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0258(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IM1AbilityBase>        CallFunc_BP_MakeForwardingContext_self_CastInput_1; // 0x0268(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue_1;   // 0x0278(0x0010)()
	TScriptInterface<class IM1AbilityBase>        CallFunc_InvokeAllStatusEffectToTargetByTag_self_CastInput_1; // 0x0288(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FM1AbilityId>                   CallFunc_InvokeAllStatusEffectToTargetByTag_ReturnValue_1; // 0x0298(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValidTags_ReturnValue_2;                // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidTags_ReturnValue_3;                // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidTags_ReturnValue_4;                // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager) == 0x000008, "Wrong alignment on M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager");
static_assert(sizeof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager) == 0x0002B8, "Wrong size on M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, EntryPoint) == 0x000000, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000004, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_OverlappedComponent_1) == 0x000008, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_OtherActor_1) == 0x000010, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_OtherComp_1) == 0x000018, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_OtherBodyIndex_1) == 0x000020, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_bFromSweep) == 0x000024, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_SweepResult) == 0x000028, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_IsValid_ReturnValue) == 0x0000C4, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, Temp_int_Array_Index_Variable) == 0x0000C8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_OverlappedComponent) == 0x0000D0, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_OtherActor) == 0x0000D8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_OtherComp) == 0x0000E0, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CustomEvent_OtherBodyIndex) == 0x0000E8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CustomEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_IsValidTags_ReturnValue) == 0x0000EC, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_IsValidTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Map_Find_Value) == 0x0000F0, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Map_Find_ReturnValue) == 0x000100, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, Temp_int_Array_Index_Variable_1) == 0x000104, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Array_Get_Item) == 0x000108, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_EndStatusEffectToTarget_self_CastInput) == 0x000118, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_EndStatusEffectToTarget_self_CastInput' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Array_Length_ReturnValue) == 0x000128, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, Temp_int_Loop_Counter_Variable) == 0x00012C, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Less_IntInt_ReturnValue) == 0x000130, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Add_IntInt_ReturnValue) == 0x000134, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Array_Get_Item_1) == 0x000138, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_IsValid_ReturnValue_1) == 0x000150, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Array_Length_ReturnValue_1) == 0x000154, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, Temp_int_Loop_Counter_Variable_1) == 0x000158, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Less_IntInt_ReturnValue_1) == 0x00015C, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Add_IntInt_ReturnValue_1) == 0x000160, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Map_Remove_ReturnValue) == 0x000164, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, Temp_struct_Variable) == 0x000168, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_NotEqual_NameName_ReturnValue) == 0x000178, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_NetMulticast_SpawnHitFXsForAbility_self_CastInput) == 0x000180, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_NetMulticast_SpawnHitFXsForAbility_self_CastInput' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_IsValid_ReturnValue_2) == 0x000190, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, Temp_name_Variable) == 0x000198, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001A8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0001A9, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, Temp_name_Variable_1) == 0x0001B0, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Array_AddUnique_ReturnValue) == 0x0001C0, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_BP_MakeForwardingContext_self_CastInput) == 0x0001C8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_BP_MakeForwardingContext_self_CastInput' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_BP_MakeForwardingContext_ReturnValue) == 0x0001D8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_BP_MakeForwardingContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, Temp_struct_Variable_1) == 0x0001E8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_InvokeAllStatusEffectToTargetByTag_self_CastInput) == 0x0001F8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_InvokeAllStatusEffectToTargetByTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_InvokeAllStatusEffectToTargetByTag_ReturnValue) == 0x000208, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_InvokeAllStatusEffectToTargetByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_MakeStruct_M1AbilityIDList) == 0x000218, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_MakeStruct_M1AbilityIDList' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_BP_ExecuteOperationsToTargetByTag_self_CastInput) == 0x000228, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_BP_ExecuteOperationsToTargetByTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000238, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_CheckActorRelations_ReturnValue) == 0x000239, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_CheckActorRelations_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Array_RemoveItem_ReturnValue) == 0x00023A, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_IsValidTags_ReturnValue_1) == 0x00023B, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_IsValidTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CreateDelegate_OutputDelegate_1) == 0x00023C, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000250, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, K2Node_CreateDelegate_OutputDelegate_2) == 0x000258, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_BP_MakeForwardingContext_self_CastInput_1) == 0x000268, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_BP_MakeForwardingContext_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_BP_MakeForwardingContext_ReturnValue_1) == 0x000278, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_BP_MakeForwardingContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_InvokeAllStatusEffectToTargetByTag_self_CastInput_1) == 0x000288, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_InvokeAllStatusEffectToTargetByTag_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_InvokeAllStatusEffectToTargetByTag_ReturnValue_1) == 0x000298, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_InvokeAllStatusEffectToTargetByTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_IsValidTags_ReturnValue_2) == 0x0002A8, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_IsValidTags_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_IsValidTags_ReturnValue_3) == 0x0002A9, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_IsValidTags_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_IsValidTags_ReturnValue_4) == 0x0002AA, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_IsValidTags_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_BooleanOR_ReturnValue) == 0x0002AB, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_BooleanAND_ReturnValue) == 0x0002AC, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0002B0, "Member 'M1AOECollisionManager_C_ExecuteUbergraph_M1AOECollisionManager::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function M1AOECollisionManager.M1AOECollisionManager_C.GetOverlapActors
// 0x0010 (0x0010 - 0x0000)
struct M1AOECollisionManager_C_GetOverlapActors final
{
public:
	TArray<class AActor*>                         OverlapActors_0;                                   // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(M1AOECollisionManager_C_GetOverlapActors) == 0x000008, "Wrong alignment on M1AOECollisionManager_C_GetOverlapActors");
static_assert(sizeof(M1AOECollisionManager_C_GetOverlapActors) == 0x000010, "Wrong size on M1AOECollisionManager_C_GetOverlapActors");
static_assert(offsetof(M1AOECollisionManager_C_GetOverlapActors, OverlapActors_0) == 0x000000, "Member 'M1AOECollisionManager_C_GetOverlapActors::OverlapActors_0' has a wrong offset!");

}

