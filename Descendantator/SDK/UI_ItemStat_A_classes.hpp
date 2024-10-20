#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemStat_A

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemStat_A.UI_ItemStat_A_C
// 0x0050 (0x07C8 - 0x0778)
class UUI_ItemStat_A_C final : public UM1UIItemStat
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Negative;                                      // 0x0780(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Positive;                                      // 0x0788(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Dodge;                                             // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                P_StatOffset;                                      // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBarBG;                                     // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_Compare;                                  // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Mark_1;                                         // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1SpriteImage*                         Widget_Arrow;                                      // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_SetDiffRatio(float InOwnRatio, float InToCompareRatio);
	void BP_SetDiffStatValue(bool bIsZero, bool bPositiveNum);
	void BP_SetEffectiveSkilll(bool bIsEffective);
	void ExecuteUbergraph_UI_ItemStat_A(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemStat_A_C">();
	}
	static class UUI_ItemStat_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemStat_A_C>();
	}
};
static_assert(alignof(UUI_ItemStat_A_C) == 0x000008, "Wrong alignment on UUI_ItemStat_A_C");
static_assert(sizeof(UUI_ItemStat_A_C) == 0x0007C8, "Wrong size on UUI_ItemStat_A_C");
static_assert(offsetof(UUI_ItemStat_A_C, UberGraphFrame) == 0x000778, "Member 'UUI_ItemStat_A_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, Ani_Negative) == 0x000780, "Member 'UUI_ItemStat_A_C::Ani_Negative' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, Ani_Positive) == 0x000788, "Member 'UUI_ItemStat_A_C::Ani_Positive' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, Dodge) == 0x000790, "Member 'UUI_ItemStat_A_C::Dodge' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, P_StatOffset) == 0x000798, "Member 'UUI_ItemStat_A_C::P_StatOffset' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, ProgressBar) == 0x0007A0, "Member 'UUI_ItemStat_A_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, ProgressBarBG) == 0x0007A8, "Member 'UUI_ItemStat_A_C::ProgressBarBG' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, Switcher_Compare) == 0x0007B0, "Member 'UUI_ItemStat_A_C::Switcher_Compare' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, TB_Mark_1) == 0x0007B8, "Member 'UUI_ItemStat_A_C::TB_Mark_1' has a wrong offset!");
static_assert(offsetof(UUI_ItemStat_A_C, Widget_Arrow) == 0x0007C0, "Member 'UUI_ItemStat_A_C::Widget_Arrow' has a wrong offset!");

}

