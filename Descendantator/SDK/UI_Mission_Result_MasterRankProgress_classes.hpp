#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Result_MasterRankProgress

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Result_MasterRankProgress.UI_Mission_Result_MasterRankProgress_C
// 0x0080 (0x07D0 - 0x0750)
class UUI_Mission_Result_MasterRankProgress_C final : public UM1UIMissionResultExp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_ProgressFull;                               // 0x0758(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_Default;                                    // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           CurrentLevel;                                      // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Icon_NextMasteryRank;                              // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           NextLevel;                                         // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Panel_CurrentLevel;                                // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Progress_Bonus;                                    // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Progress_Complete;                                 // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Progress_Default;                                  // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Progress_Exp;                                      // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RankUpText;                                        // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_ExpValueNotice_C*    UI_Mission_Result_ExpValueNotice;                  // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_ExpValueNotice_C*    UI_Mission_Result_ExpValueNotice1;                 // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Mission_Result_ExpValueNotice_C*    UI_Mission_Result_ExpValueNotice2;                 // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          MaxLevel;                                          // 0x07C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayProgressFullAnim;                             // 0x07C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_MasteryRankExpAcquiredType(const TArray<EM1UIMissionResultExpType>& InAcquiredType);
	void BP_PlayLevelUpAnim();
	void BP_ResetAllExpProgressValue();
	void BP_SetExpProgressValue(EM1UIMissionResultExpType InType, float InProgressValue);
	void BP_SetIsMaxLevel();
	void BP_SetLevel(int32 InLevel);
	void BP_ShowExpText(EM1UIMissionResultExpType InType, int64 InExp);
	void Construct();
	void ExecuteUbergraph_UI_Mission_Result_MasterRankProgress(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UIMax_Level(bool Max_Level);
	void UISetDefault();
	void WidgetAnimationEvt_UIAnim_ProgressFull_K2Node_WidgetAnimationEvent_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Result_MasterRankProgress_C">();
	}
	static class UUI_Mission_Result_MasterRankProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Result_MasterRankProgress_C>();
	}
};
static_assert(alignof(UUI_Mission_Result_MasterRankProgress_C) == 0x000008, "Wrong alignment on UUI_Mission_Result_MasterRankProgress_C");
static_assert(sizeof(UUI_Mission_Result_MasterRankProgress_C) == 0x0007D0, "Wrong size on UUI_Mission_Result_MasterRankProgress_C");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, UberGraphFrame) == 0x000750, "Member 'UUI_Mission_Result_MasterRankProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, UIAnim_ProgressFull) == 0x000758, "Member 'UUI_Mission_Result_MasterRankProgress_C::UIAnim_ProgressFull' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, Button_Default) == 0x000760, "Member 'UUI_Mission_Result_MasterRankProgress_C::Button_Default' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, CurrentLevel) == 0x000768, "Member 'UUI_Mission_Result_MasterRankProgress_C::CurrentLevel' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, Icon_NextMasteryRank) == 0x000770, "Member 'UUI_Mission_Result_MasterRankProgress_C::Icon_NextMasteryRank' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, NextLevel) == 0x000778, "Member 'UUI_Mission_Result_MasterRankProgress_C::NextLevel' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, Panel_CurrentLevel) == 0x000780, "Member 'UUI_Mission_Result_MasterRankProgress_C::Panel_CurrentLevel' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, Progress_Bonus) == 0x000788, "Member 'UUI_Mission_Result_MasterRankProgress_C::Progress_Bonus' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, Progress_Complete) == 0x000790, "Member 'UUI_Mission_Result_MasterRankProgress_C::Progress_Complete' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, Progress_Default) == 0x000798, "Member 'UUI_Mission_Result_MasterRankProgress_C::Progress_Default' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, Progress_Exp) == 0x0007A0, "Member 'UUI_Mission_Result_MasterRankProgress_C::Progress_Exp' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, RankUpText) == 0x0007A8, "Member 'UUI_Mission_Result_MasterRankProgress_C::RankUpText' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, UI_Mission_Result_ExpValueNotice) == 0x0007B0, "Member 'UUI_Mission_Result_MasterRankProgress_C::UI_Mission_Result_ExpValueNotice' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, UI_Mission_Result_ExpValueNotice1) == 0x0007B8, "Member 'UUI_Mission_Result_MasterRankProgress_C::UI_Mission_Result_ExpValueNotice1' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, UI_Mission_Result_ExpValueNotice2) == 0x0007C0, "Member 'UUI_Mission_Result_MasterRankProgress_C::UI_Mission_Result_ExpValueNotice2' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, MaxLevel) == 0x0007C8, "Member 'UUI_Mission_Result_MasterRankProgress_C::MaxLevel' has a wrong offset!");
static_assert(offsetof(UUI_Mission_Result_MasterRankProgress_C, bPlayProgressFullAnim) == 0x0007C9, "Member 'UUI_Mission_Result_MasterRankProgress_C::bPlayProgressFullAnim' has a wrong offset!");

}

