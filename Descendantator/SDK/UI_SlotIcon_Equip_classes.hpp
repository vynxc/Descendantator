#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SlotIcon_Equip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SlotIcon_Equip.UI_SlotIcon_Equip_C
// 0x0020 (0x0270 - 0x0250)
class UUI_SlotIcon_Equip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Equip;                                             // 0x0258(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_SlotType;                                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_SlotType;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_SlotIcon_Equip(int32 EntryPoint);
	void SetEquipType(bool IsEquipped, EM1EquipmentSlotType InSlotType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SlotIcon_Equip_C">();
	}
	static class UUI_SlotIcon_Equip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SlotIcon_Equip_C>();
	}
};
static_assert(alignof(UUI_SlotIcon_Equip_C) == 0x000008, "Wrong alignment on UUI_SlotIcon_Equip_C");
static_assert(sizeof(UUI_SlotIcon_Equip_C) == 0x000270, "Wrong size on UUI_SlotIcon_Equip_C");
static_assert(offsetof(UUI_SlotIcon_Equip_C, UberGraphFrame) == 0x000250, "Member 'UUI_SlotIcon_Equip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SlotIcon_Equip_C, Equip) == 0x000258, "Member 'UUI_SlotIcon_Equip_C::Equip' has a wrong offset!");
static_assert(offsetof(UUI_SlotIcon_Equip_C, TB_SlotType) == 0x000260, "Member 'UUI_SlotIcon_Equip_C::TB_SlotType' has a wrong offset!");
static_assert(offsetof(UUI_SlotIcon_Equip_C, WS_SlotType) == 0x000268, "Member 'UUI_SlotIcon_Equip_C::WS_SlotType' has a wrong offset!");

}

