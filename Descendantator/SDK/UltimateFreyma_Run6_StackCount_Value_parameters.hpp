#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UltimateFreyma_Run6_StackCount_Value

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function UltimateFreyma_Run6_StackCount_Value.UltimateFreyma_Run6_StackCount_Value_C.Execute
// 0x0090 (0x0090 - 0x0000)
struct UltimateFreyma_Run6_StackCount_Value_C_Execute final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1AbilityOpExecCalcOutput             Output;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                        NewLocalVar;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue;                    // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue;                      // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromInt_ReturnValue_1;                    // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_FromFloat_ReturnValue_1;                  // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue;       // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue;               // 0x0050(0x0010)(NoDestructor)
	struct FM1ScaledInteger                       CallFunc_Multiply_ScaledIntScaledInt_ReturnValue;  // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1StatTypeOpValue                     K2Node_MakeStruct_M1StatTypeOpValue_1;             // 0x0070(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast;           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FromFloat_InValue_ImplicitCast_1;         // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UltimateFreyma_Run6_StackCount_Value_C_Execute) == 0x000008, "Wrong alignment on UltimateFreyma_Run6_StackCount_Value_C_Execute");
static_assert(sizeof(UltimateFreyma_Run6_StackCount_Value_C_Execute) == 0x000090, "Wrong size on UltimateFreyma_Run6_StackCount_Value_C_Execute");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, Param) == 0x000000, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::Param' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, Output) == 0x000008, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::Output' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, NewLocalVar) == 0x000018, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::NewLocalVar' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_FromFloat_ReturnValue) == 0x000028, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_FromFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_FromInt_ReturnValue) == 0x000030, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_FromInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_FromInt_ReturnValue_1) == 0x000038, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_FromInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_FromFloat_ReturnValue_1) == 0x000040, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_FromFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_Add_ScaledIntScaledInt_ReturnValue) == 0x000048, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_Add_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, K2Node_MakeStruct_M1StatTypeOpValue) == 0x000050, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::K2Node_MakeStruct_M1StatTypeOpValue' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_Multiply_ScaledIntScaledInt_ReturnValue) == 0x000060, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_Multiply_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, K2Node_MakeStruct_M1StatTypeOpValue_1) == 0x000070, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::K2Node_MakeStruct_M1StatTypeOpValue_1' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_Array_Add_ReturnValue_1) == 0x000080, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_FromFloat_InValue_ImplicitCast) == 0x000084, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_FromFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UltimateFreyma_Run6_StackCount_Value_C_Execute, CallFunc_FromFloat_InValue_ImplicitCast_1) == 0x000088, "Member 'UltimateFreyma_Run6_StackCount_Value_C_Execute::CallFunc_FromFloat_InValue_ImplicitCast_1' has a wrong offset!");

}

