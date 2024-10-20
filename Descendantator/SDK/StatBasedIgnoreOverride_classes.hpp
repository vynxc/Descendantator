#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatBasedIgnoreOverride

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StatBasedIgnoreOverride.StatBasedIgnoreOverride_C
// 0x0010 (0x00F8 - 0x00E8)
class UStatBasedIgnoreOverride_C : public UM1AbilityOpModValueCalc
{
public:
	double                                        Multiply;                                          // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   StatType;                                          // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatBasedIgnoreOverride_C">();
	}
	static class UStatBasedIgnoreOverride_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatBasedIgnoreOverride_C>();
	}
};
static_assert(alignof(UStatBasedIgnoreOverride_C) == 0x000008, "Wrong alignment on UStatBasedIgnoreOverride_C");
static_assert(sizeof(UStatBasedIgnoreOverride_C) == 0x0000F8, "Wrong size on UStatBasedIgnoreOverride_C");
static_assert(offsetof(UStatBasedIgnoreOverride_C, Multiply) == 0x0000E8, "Member 'UStatBasedIgnoreOverride_C::Multiply' has a wrong offset!");
static_assert(offsetof(UStatBasedIgnoreOverride_C, StatType) == 0x0000F0, "Member 'UStatBasedIgnoreOverride_C::StatType' has a wrong offset!");

}

