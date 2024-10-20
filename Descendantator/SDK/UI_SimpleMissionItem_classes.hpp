#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SimpleMissionItem

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SimpleMissionItem.UI_SimpleMissionItem_C
// 0x0020 (0x0728 - 0x0708)
class UUI_SimpleMissionItem_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IMG_Icon;                                          // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Title;                                          // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_001_C*                    UI_Deco_Back_001_53;                               // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_SimpleMissionItem(int32 EntryPoint);
	void SetDataImpl(class UM1UIData* InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SimpleMissionItem_C">();
	}
	static class UUI_SimpleMissionItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SimpleMissionItem_C>();
	}
};
static_assert(alignof(UUI_SimpleMissionItem_C) == 0x000008, "Wrong alignment on UUI_SimpleMissionItem_C");
static_assert(sizeof(UUI_SimpleMissionItem_C) == 0x000728, "Wrong size on UUI_SimpleMissionItem_C");
static_assert(offsetof(UUI_SimpleMissionItem_C, UberGraphFrame) == 0x000708, "Member 'UUI_SimpleMissionItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SimpleMissionItem_C, IMG_Icon) == 0x000710, "Member 'UUI_SimpleMissionItem_C::IMG_Icon' has a wrong offset!");
static_assert(offsetof(UUI_SimpleMissionItem_C, TB_Title) == 0x000718, "Member 'UUI_SimpleMissionItem_C::TB_Title' has a wrong offset!");
static_assert(offsetof(UUI_SimpleMissionItem_C, UI_Deco_Back_001_53) == 0x000720, "Member 'UUI_SimpleMissionItem_C::UI_Deco_Back_001_53' has a wrong offset!");

}

