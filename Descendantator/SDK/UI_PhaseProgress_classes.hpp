#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PhaseProgress

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PhaseProgress.UI_PhaseProgress_C
// 0x0020 (0x0C60 - 0x0C40)
class UUI_PhaseProgress_C final : public UM1PhaseProgressBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Hit;                                        // 0x0C48(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Hit;                                         // 0x0C50(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_PlayPhaseAnimation(int32 InInfoIndex);
	void BP_SetProgressStyleOnEdge(const struct FProgressBarStyle& InStyle, bool InEnd);
	void Construct();
	void ExecuteUbergraph_UI_PhaseProgress(int32 EntryPoint);
	void OnEventWidgetClose(EM1WidgetAnimDirection InDirection);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void PreConstruct(bool IsDesignTime);
	void SetUI_Corner();
	void UI_PhaseProgress_UpdateProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PhaseProgress_C">();
	}
	static class UUI_PhaseProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PhaseProgress_C>();
	}
};
static_assert(alignof(UUI_PhaseProgress_C) == 0x000010, "Wrong alignment on UUI_PhaseProgress_C");
static_assert(sizeof(UUI_PhaseProgress_C) == 0x000C60, "Wrong size on UUI_PhaseProgress_C");
static_assert(offsetof(UUI_PhaseProgress_C, UberGraphFrame) == 0x000C40, "Member 'UUI_PhaseProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PhaseProgress_C, UIAnim_Hit) == 0x000C48, "Member 'UUI_PhaseProgress_C::UIAnim_Hit' has a wrong offset!");
static_assert(offsetof(UUI_PhaseProgress_C, Image_Hit) == 0x000C50, "Member 'UUI_PhaseProgress_C::Image_Hit' has a wrong offset!");

}

