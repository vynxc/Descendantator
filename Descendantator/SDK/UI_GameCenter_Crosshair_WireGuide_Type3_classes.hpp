#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameCenter_Crosshair_WireGuide_Type3

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameCenter_Crosshair_WireGuide_Type3.UI_GameCenter_Crosshair_WireGuide_Type3_C
// 0x0010 (0x0718 - 0x0708)
class UUI_GameCenter_Crosshair_WireGuide_Type3_C final : public UM1UIWidget
{
public:
	class UImage*                                 Img_WireGuide_02;                                  // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 New;                                               // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameCenter_Crosshair_WireGuide_Type3_C">();
	}
	static class UUI_GameCenter_Crosshair_WireGuide_Type3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameCenter_Crosshair_WireGuide_Type3_C>();
	}
};
static_assert(alignof(UUI_GameCenter_Crosshair_WireGuide_Type3_C) == 0x000008, "Wrong alignment on UUI_GameCenter_Crosshair_WireGuide_Type3_C");
static_assert(sizeof(UUI_GameCenter_Crosshair_WireGuide_Type3_C) == 0x000718, "Wrong size on UUI_GameCenter_Crosshair_WireGuide_Type3_C");
static_assert(offsetof(UUI_GameCenter_Crosshair_WireGuide_Type3_C, Img_WireGuide_02) == 0x000708, "Member 'UUI_GameCenter_Crosshair_WireGuide_Type3_C::Img_WireGuide_02' has a wrong offset!");
static_assert(offsetof(UUI_GameCenter_Crosshair_WireGuide_Type3_C, New) == 0x000710, "Member 'UUI_GameCenter_Crosshair_WireGuide_Type3_C::New' has a wrong offset!");

}

