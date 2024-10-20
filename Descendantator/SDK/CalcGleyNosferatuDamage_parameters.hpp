#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcGleyNosferatuDamage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function CalcGleyNosferatuDamage.CalcGleyNosferatuDamage_C.DoCalculation
// 0x0388 (0x0388 - 0x0000)
struct CalcGleyNosferatuDamage_C_DoCalculation final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       ATKMultiplierByDistance;                           // 0x0148(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0170(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0188(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01A0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01F0(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Array_Get_Item;                           // 0x0258(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0260(0x0018)()
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_2;     // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0288(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x02D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x02F0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0340(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0350(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0368(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_DetermineATKMultiplierByDistance_RetATKMultiplierByDistance; // 0x0378(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyATKMultiplierByCharge_ATKMultiplierByCharge_ImplicitCast; // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcGleyNosferatuDamage_C_DoCalculation) == 0x000008, "Wrong alignment on CalcGleyNosferatuDamage_C_DoCalculation");
static_assert(sizeof(CalcGleyNosferatuDamage_C_DoCalculation) == 0x000388, "Wrong size on CalcGleyNosferatuDamage_C_DoCalculation");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, Param) == 0x000000, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::Param' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, DamageInfo) == 0x000008, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, ATKMultiplierByDistance) == 0x000148, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::ATKMultiplierByDistance' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x000150, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000160, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue) == 0x000170, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000188, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData) == 0x0001A0, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001F0, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000240, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue_1) == 0x000248, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Array_Get_Item) == 0x000258, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000260, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_ScaledIntToString_ReturnValue_2) == 0x000278, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_ScaledIntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_2) == 0x000288, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0002D8, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, K2Node_MakeStruct_FormatArgumentData_3) == 0x0002F0, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, K2Node_MakeArray_Array) == 0x000340, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Format_ReturnValue) == 0x000350, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_Conv_TextToString_ReturnValue) == 0x000368, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_DetermineATKMultiplierByDistance_RetATKMultiplierByDistance) == 0x000378, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_DetermineATKMultiplierByDistance_RetATKMultiplierByDistance' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_DoCalculation, CallFunc_ApplyATKMultiplierByCharge_ATKMultiplierByCharge_ImplicitCast) == 0x000380, "Member 'CalcGleyNosferatuDamage_C_DoCalculation::CallFunc_ApplyATKMultiplierByCharge_ATKMultiplierByCharge_ImplicitCast' has a wrong offset!");

// Function CalcGleyNosferatuDamage.CalcGleyNosferatuDamage_C.SetAdditionalDamageInfo
// 0x0150 (0x0150 - 0x0000)
struct CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo) == 0x000008, "Wrong alignment on CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo");
static_assert(sizeof(CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo) == 0x000150, "Wrong size on CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo, Param) == 0x000000, "Member 'CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo::Param' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo, DamageInfo) == 0x000008, "Member 'CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo, CallFunc_GetRefStat_ReturnValue) == 0x000148, "Member 'CalcGleyNosferatuDamage_C_SetAdditionalDamageInfo::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");

// Function CalcGleyNosferatuDamage.CalcGleyNosferatuDamage_C.SumATK
// 0x0678 (0x0678 - 0x0000)
struct CalcGleyNosferatuDamage_C_SumATK final
{
public:
	struct FM1AbilityOpCalcParam                  Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0008(0x0140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FM1ScaledInteger                       TmpATKValue;                                       // 0x0148(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       SumATK_0;                                          // 0x0150(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue;                   // 0x0158(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_1;                 // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue;       // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0178(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0190(0x0050)(HasGetValueTypeHash)
	EM1MonsterCategory                            CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue; // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1MonsterCategory                            CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue_1; // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LegionCategory                             CallFunc_GetLegionCategoryFromOpTarget_ReturnValue; // 0x01E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0208(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0220(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0238(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0288(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_2;                 // 0x02D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_3;                 // 0x02E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_1;     // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_2;     // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0308(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0320(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0338(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0388(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_4;                 // 0x03D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_5;                 // 0x03E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_3;     // 0x03E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x03F8(0x0018)()
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_6;                 // 0x0410(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0418(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_7;                 // 0x0468(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue;       // 0x0470(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_1;     // 0x0478(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_2;     // 0x0480(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_4;     // 0x0488(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EM1LegionCategory                             CallFunc_GetLegionCategoryFromOpTarget_ReturnValue_1; // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x04A0(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B9[0x7];                                      // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x04C0(0x0050)(HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_8;                 // 0x0510(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_9;                 // 0x0518(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_5;     // 0x0520(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_ScaledIntToString_ReturnValue_6;     // 0x0530(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0540(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0558(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0570(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x05C0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0610(0x0010)(ReferenceParm)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_10;                // 0x0620(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0628(0x0018)()
	struct FM1ScaledInteger                       CallFunc_Add_ScaledIntScaledInt_ReturnValue_3;     // 0x0640(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0648(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_11;                // 0x0658(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_12;                // 0x0660(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_GetRefStat_ReturnValue_13;                // 0x0668(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_ScaledIntScaledInt_ReturnValue; // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CalcGleyNosferatuDamage_C_SumATK) == 0x000008, "Wrong alignment on CalcGleyNosferatuDamage_C_SumATK");
static_assert(sizeof(CalcGleyNosferatuDamage_C_SumATK) == 0x000678, "Wrong size on CalcGleyNosferatuDamage_C_SumATK");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, Param) == 0x000000, "Member 'CalcGleyNosferatuDamage_C_SumATK::Param' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, DamageInfo) == 0x000008, "Member 'CalcGleyNosferatuDamage_C_SumATK::DamageInfo' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, TmpATKValue) == 0x000148, "Member 'CalcGleyNosferatuDamage_C_SumATK::TmpATKValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, SumATK_0) == 0x000150, "Member 'CalcGleyNosferatuDamage_C_SumATK::SumATK_0' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue) == 0x000158, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_1) == 0x000160, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_ScaledIntToString_ReturnValue) == 0x000168, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_ScaledIntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue) == 0x000178, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData) == 0x000190, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue) == 0x0001E0, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_SwitchEnum_CmpSuccess) == 0x0001E1, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue_1) == 0x0001E2, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetMonsterCategoryFromOpTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetLegionCategoryFromOpTarget_ReturnValue) == 0x0001E3, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetLegionCategoryFromOpTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0001E8, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x0001F8, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000208, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000220, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData_1) == 0x000238, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData_2) == 0x000288, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_2) == 0x0002D8, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_3) == 0x0002E0, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_ScaledIntToString_ReturnValue_1) == 0x0002E8, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_ScaledIntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_ScaledIntToString_ReturnValue_2) == 0x0002F8, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_ScaledIntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000308, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000320, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData_3) == 0x000338, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData_4) == 0x000388, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_4) == 0x0003D8, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_5) == 0x0003E0, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_ScaledIntToString_ReturnValue_3) == 0x0003E8, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_ScaledIntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0003F8, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_6) == 0x000410, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData_5) == 0x000418, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_7) == 0x000468, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Add_ScaledIntScaledInt_ReturnValue) == 0x000470, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Add_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Add_ScaledIntScaledInt_ReturnValue_1) == 0x000478, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Add_ScaledIntScaledInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Add_ScaledIntScaledInt_ReturnValue_2) == 0x000480, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Add_ScaledIntScaledInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_ScaledIntToString_ReturnValue_4) == 0x000488, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_ScaledIntToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetLegionCategoryFromOpTarget_ReturnValue_1) == 0x000498, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetLegionCategoryFromOpTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0004A0, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_SwitchEnum_CmpSuccess_1) == 0x0004B8, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData_6) == 0x0004C0, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_8) == 0x000510, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_9) == 0x000518, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_ScaledIntToString_ReturnValue_5) == 0x000520, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_ScaledIntToString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_ScaledIntToString_ReturnValue_6) == 0x000530, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_ScaledIntToString_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000540, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000558, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData_7) == 0x000570, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeStruct_FormatArgumentData_8) == 0x0005C0, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, K2Node_MakeArray_Array) == 0x000610, "Member 'CalcGleyNosferatuDamage_C_SumATK::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_10) == 0x000620, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Format_ReturnValue) == 0x000628, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Add_ScaledIntScaledInt_ReturnValue_3) == 0x000640, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Add_ScaledIntScaledInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_Conv_TextToString_ReturnValue) == 0x000648, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_11) == 0x000658, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_12) == 0x000660, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GetRefStat_ReturnValue_13) == 0x000668, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GetRefStat_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(CalcGleyNosferatuDamage_C_SumATK, CallFunc_GreaterEqual_ScaledIntScaledInt_ReturnValue) == 0x000670, "Member 'CalcGleyNosferatuDamage_C_SumATK::CallFunc_GreaterEqual_ScaledIntScaledInt_ReturnValue' has a wrong offset!");

}

