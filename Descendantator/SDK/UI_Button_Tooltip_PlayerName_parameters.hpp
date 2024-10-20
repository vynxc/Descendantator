#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Button_Tooltip_PlayerName

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "UMG_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function UI_Button_Tooltip_PlayerName.UI_Button_Tooltip_PlayerName_C.ExecuteUbergraph_UI_Button_Tooltip_PlayerName
// 0x0080 (0x0080 - 0x0000)
struct UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataPlayerPlatformInfo*            K2Node_DynamicCast_AsM1UIData_Player_Platform_Info; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBlockUser_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         CallFunc_GetPlatformType_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1LoginPlatformTypes                         CallFunc_GetMyPlatformType_ReturnValue;            // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlatformAccountName_ReturnValue;       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayAccountID_ReturnValue;          // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName) == 0x000008, "Wrong alignment on UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName");
static_assert(sizeof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName) == 0x000080, "Wrong size on UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, EntryPoint) == 0x000000, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, Temp_byte_Variable) == 0x000004, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, K2Node_Event_InData) == 0x000008, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, K2Node_DynamicCast_AsM1UIData_Player_Platform_Info) == 0x000010, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::K2Node_DynamicCast_AsM1UIData_Player_Platform_Info' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, CallFunc_IsBlockUser_ReturnValue) == 0x000028, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::CallFunc_IsBlockUser_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, CallFunc_GetPlatformType_ReturnValue) == 0x000029, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::CallFunc_GetPlatformType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, CallFunc_GetMyPlatformType_ReturnValue) == 0x00002A, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::CallFunc_GetMyPlatformType_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, CallFunc_GetPlatformAccountName_ReturnValue) == 0x000030, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::CallFunc_GetPlatformAccountName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, CallFunc_GetDisplayAccountID_ReturnValue) == 0x000040, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::CallFunc_GetDisplayAccountID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, K2Node_Event_InDirection) == 0x000050, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::K2Node_Event_InDirection' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, CallFunc_PlayAnimation_ReturnValue_1) == 0x000070, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, Temp_byte_Variable_1) == 0x000078, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, Temp_bool_Variable) == 0x000079, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName, K2Node_Select_Default) == 0x00007A, "Member 'UI_Button_Tooltip_PlayerName_C_ExecuteUbergraph_UI_Button_Tooltip_PlayerName::K2Node_Select_Default' has a wrong offset!");

// Function UI_Button_Tooltip_PlayerName.UI_Button_Tooltip_PlayerName_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_Button_Tooltip_PlayerName_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Button_Tooltip_PlayerName_C_OnEventWidgetOpen) == 0x000001, "Wrong alignment on UI_Button_Tooltip_PlayerName_C_OnEventWidgetOpen");
static_assert(sizeof(UI_Button_Tooltip_PlayerName_C_OnEventWidgetOpen) == 0x000001, "Wrong size on UI_Button_Tooltip_PlayerName_C_OnEventWidgetOpen");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_OnEventWidgetOpen, InDirection) == 0x000000, "Member 'UI_Button_Tooltip_PlayerName_C_OnEventWidgetOpen::InDirection' has a wrong offset!");

// Function UI_Button_Tooltip_PlayerName.UI_Button_Tooltip_PlayerName_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_Button_Tooltip_PlayerName_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Button_Tooltip_PlayerName_C_SetDataImpl) == 0x000008, "Wrong alignment on UI_Button_Tooltip_PlayerName_C_SetDataImpl");
static_assert(sizeof(UI_Button_Tooltip_PlayerName_C_SetDataImpl) == 0x000008, "Wrong size on UI_Button_Tooltip_PlayerName_C_SetDataImpl");
static_assert(offsetof(UI_Button_Tooltip_PlayerName_C_SetDataImpl, InData) == 0x000000, "Member 'UI_Button_Tooltip_PlayerName_C_SetDataImpl::InData' has a wrong offset!");

}

