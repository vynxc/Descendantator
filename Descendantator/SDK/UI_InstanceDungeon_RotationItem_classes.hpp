#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InstanceDungeon_RotationItem

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_InstanceDungeon_RotationItem.UI_InstanceDungeon_RotationItem_C
// 0x0010 (0x0730 - 0x0720)
class UUI_InstanceDungeon_RotationItem_C final : public UM1UIInstanceDungeonRotationItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          DecoBackOff;                                       // 0x0728(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Deco01Off;                                         // 0x0729(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_InstanceDungeon_RotationItem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDataImpl(class UM1UIData* InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_InstanceDungeon_RotationItem_C">();
	}
	static class UUI_InstanceDungeon_RotationItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_InstanceDungeon_RotationItem_C>();
	}
};
static_assert(alignof(UUI_InstanceDungeon_RotationItem_C) == 0x000008, "Wrong alignment on UUI_InstanceDungeon_RotationItem_C");
static_assert(sizeof(UUI_InstanceDungeon_RotationItem_C) == 0x000730, "Wrong size on UUI_InstanceDungeon_RotationItem_C");
static_assert(offsetof(UUI_InstanceDungeon_RotationItem_C, UberGraphFrame) == 0x000720, "Member 'UUI_InstanceDungeon_RotationItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_InstanceDungeon_RotationItem_C, DecoBackOff) == 0x000728, "Member 'UUI_InstanceDungeon_RotationItem_C::DecoBackOff' has a wrong offset!");
static_assert(offsetof(UUI_InstanceDungeon_RotationItem_C, Deco01Off) == 0x000729, "Member 'UUI_InstanceDungeon_RotationItem_C::Deco01Off' has a wrong offset!");

}

