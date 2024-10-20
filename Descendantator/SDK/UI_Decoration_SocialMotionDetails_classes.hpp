#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Decoration_SocialMotionDetails

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Decoration_SocialMotionDetails.UI_Decoration_SocialMotionDetails_C
// 0x0040 (0x0760 - 0x0720)
class UUI_Decoration_SocialMotionDetails_C final : public UM1UISocialMotionDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0728(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1RichTextBlock*                       TB_Desc;                                           // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_ItemType;                                       // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_ItemName;                                     // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Tier;                                         // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_002_C*                    UI_Deco_Back_002;                                  // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_TitleLine_04_C*                UI_Deco_TitleLine_3;                               // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Decoration_SocialMotionDetails(int32 EntryPoint);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void SetDataImpl(class UM1UIData* InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Decoration_SocialMotionDetails_C">();
	}
	static class UUI_Decoration_SocialMotionDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Decoration_SocialMotionDetails_C>();
	}
};
static_assert(alignof(UUI_Decoration_SocialMotionDetails_C) == 0x000008, "Wrong alignment on UUI_Decoration_SocialMotionDetails_C");
static_assert(sizeof(UUI_Decoration_SocialMotionDetails_C) == 0x000760, "Wrong size on UUI_Decoration_SocialMotionDetails_C");
static_assert(offsetof(UUI_Decoration_SocialMotionDetails_C, UberGraphFrame) == 0x000720, "Member 'UUI_Decoration_SocialMotionDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Decoration_SocialMotionDetails_C, UIAnim_Open) == 0x000728, "Member 'UUI_Decoration_SocialMotionDetails_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Decoration_SocialMotionDetails_C, TB_Desc) == 0x000730, "Member 'UUI_Decoration_SocialMotionDetails_C::TB_Desc' has a wrong offset!");
static_assert(offsetof(UUI_Decoration_SocialMotionDetails_C, TB_ItemType) == 0x000738, "Member 'UUI_Decoration_SocialMotionDetails_C::TB_ItemType' has a wrong offset!");
static_assert(offsetof(UUI_Decoration_SocialMotionDetails_C, Text_ItemName) == 0x000740, "Member 'UUI_Decoration_SocialMotionDetails_C::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UUI_Decoration_SocialMotionDetails_C, Text_Tier) == 0x000748, "Member 'UUI_Decoration_SocialMotionDetails_C::Text_Tier' has a wrong offset!");
static_assert(offsetof(UUI_Decoration_SocialMotionDetails_C, UI_Deco_Back_002) == 0x000750, "Member 'UUI_Decoration_SocialMotionDetails_C::UI_Deco_Back_002' has a wrong offset!");
static_assert(offsetof(UUI_Decoration_SocialMotionDetails_C, UI_Deco_TitleLine_3) == 0x000758, "Member 'UUI_Decoration_SocialMotionDetails_C::UI_Deco_TitleLine_3' has a wrong offset!");

}

