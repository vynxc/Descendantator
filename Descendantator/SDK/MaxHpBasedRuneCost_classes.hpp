#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaxHpBasedRuneCost

#include "Basic.hpp"

#include "StatBased_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MaxHpBasedRuneCost.MaxHpBasedRuneCost_C
// 0x0000 (0x00F8 - 0x00F8)
class UMaxHpBasedRuneCost_C final : public UStatBased_C
{
public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MaxHpBasedRuneCost_C">();
	}
	static class UMaxHpBasedRuneCost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaxHpBasedRuneCost_C>();
	}
};
static_assert(alignof(UMaxHpBasedRuneCost_C) == 0x000008, "Wrong alignment on UMaxHpBasedRuneCost_C");
static_assert(sizeof(UMaxHpBasedRuneCost_C) == 0x0000F8, "Wrong size on UMaxHpBasedRuneCost_C");

}

