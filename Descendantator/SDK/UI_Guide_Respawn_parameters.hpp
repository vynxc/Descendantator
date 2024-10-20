#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Guide_Respawn

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Guide_Respawn.UI_Guide_Respawn_C.BP_widget_playAkEvent
// 0x0008 (0x0008 - 0x0000)
struct UI_Guide_Respawn_C_BP_widget_playAkEvent final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Guide_Respawn_C_BP_widget_playAkEvent) == 0x000008, "Wrong alignment on UI_Guide_Respawn_C_BP_widget_playAkEvent");
static_assert(sizeof(UI_Guide_Respawn_C_BP_widget_playAkEvent) == 0x000008, "Wrong size on UI_Guide_Respawn_C_BP_widget_playAkEvent");
static_assert(offsetof(UI_Guide_Respawn_C_BP_widget_playAkEvent, AkEvent) == 0x000000, "Member 'UI_Guide_Respawn_C_BP_widget_playAkEvent::AkEvent' has a wrong offset!");

// Function UI_Guide_Respawn.UI_Guide_Respawn_C.ExecuteUbergraph_UI_Guide_Respawn
// 0x0038 (0x0038 - 0x0000)
struct UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_1;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue_2;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn) == 0x000008, "Wrong alignment on UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn");
static_assert(sizeof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn) == 0x000038, "Wrong size on UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn");
static_assert(offsetof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn, EntryPoint) == 0x000000, "Member 'UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn, CallFunc_PlayUIAnimation_ReturnValue) == 0x000008, "Member 'UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn::CallFunc_PlayUIAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn, CallFunc_PlayUIAnimation_ReturnValue_1) == 0x000010, "Member 'UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn::CallFunc_PlayUIAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn, K2Node_Event_Animation) == 0x000018, "Member 'UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000020, "Member 'UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000021, "Member 'UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn, CallFunc_PlayUIAnimation_ReturnValue_2) == 0x000028, "Member 'UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn::CallFunc_PlayUIAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn, K2Node_CustomEvent_AkEvent) == 0x000030, "Member 'UI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn::K2Node_CustomEvent_AkEvent' has a wrong offset!");

// Function UI_Guide_Respawn.UI_Guide_Respawn_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UI_Guide_Respawn_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Guide_Respawn_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UI_Guide_Respawn_C_OnAnimationFinished");
static_assert(sizeof(UI_Guide_Respawn_C_OnAnimationFinished) == 0x000008, "Wrong size on UI_Guide_Respawn_C_OnAnimationFinished");
static_assert(offsetof(UI_Guide_Respawn_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UI_Guide_Respawn_C_OnAnimationFinished::Animation' has a wrong offset!");

}

