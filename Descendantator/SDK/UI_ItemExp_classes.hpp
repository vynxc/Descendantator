#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemExp

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemExp.UI_ItemExp_C
// 0x0028 (0x0750 - 0x0728)
class UUI_ItemExp_C final : public UM1UIItemProficiencyInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Level;                                      // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Exp;                                            // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine;                                 // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          MaxLevel;                                          // 0x0748(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Line_Onoff;                                        // 0x0749(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_UpdateAppearanceByProficiency(bool bMaxLevel);
	void ExecuteUbergraph_UI_ItemExp(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UISetMaxLevel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemExp_C">();
	}
	static class UUI_ItemExp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemExp_C>();
	}
};
static_assert(alignof(UUI_ItemExp_C) == 0x000008, "Wrong alignment on UUI_ItemExp_C");
static_assert(sizeof(UUI_ItemExp_C) == 0x000750, "Wrong size on UUI_ItemExp_C");
static_assert(offsetof(UUI_ItemExp_C, UberGraphFrame) == 0x000728, "Member 'UUI_ItemExp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemExp_C, Border_Level) == 0x000730, "Member 'UUI_ItemExp_C::Border_Level' has a wrong offset!");
static_assert(offsetof(UUI_ItemExp_C, HB_Exp) == 0x000738, "Member 'UUI_ItemExp_C::HB_Exp' has a wrong offset!");
static_assert(offsetof(UUI_ItemExp_C, UI_Deco_TitleLine) == 0x000740, "Member 'UUI_ItemExp_C::UI_Deco_TitleLine' has a wrong offset!");
static_assert(offsetof(UUI_ItemExp_C, MaxLevel) == 0x000748, "Member 'UUI_ItemExp_C::MaxLevel' has a wrong offset!");
static_assert(offsetof(UUI_ItemExp_C, Line_Onoff) == 0x000749, "Member 'UUI_ItemExp_C::Line_Onoff' has a wrong offset!");

}

