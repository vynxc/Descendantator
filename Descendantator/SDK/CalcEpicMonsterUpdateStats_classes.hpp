#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcEpicMonsterUpdateStats

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcEpicMonsterUpdateStats.CalcEpicMonsterUpdateStats_C
// 0x0008 (0x0100 - 0x00F8)
class UCalcEpicMonsterUpdateStats_C final : public UM1AbilityOpExecCalc
{
public:
	EM1StatType                                   Max_Berserk_Stat;                                  // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   Max_Stress_Stat;                                   // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   Current_Berserk_Stat;                              // 0x00FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   Current_Stress_Stat;                               // 0x00FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcEpicMonsterUpdateStats_C">();
	}
	static class UCalcEpicMonsterUpdateStats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcEpicMonsterUpdateStats_C>();
	}
};
static_assert(alignof(UCalcEpicMonsterUpdateStats_C) == 0x000008, "Wrong alignment on UCalcEpicMonsterUpdateStats_C");
static_assert(sizeof(UCalcEpicMonsterUpdateStats_C) == 0x000100, "Wrong size on UCalcEpicMonsterUpdateStats_C");
static_assert(offsetof(UCalcEpicMonsterUpdateStats_C, Max_Berserk_Stat) == 0x0000F8, "Member 'UCalcEpicMonsterUpdateStats_C::Max_Berserk_Stat' has a wrong offset!");
static_assert(offsetof(UCalcEpicMonsterUpdateStats_C, Max_Stress_Stat) == 0x0000F9, "Member 'UCalcEpicMonsterUpdateStats_C::Max_Stress_Stat' has a wrong offset!");
static_assert(offsetof(UCalcEpicMonsterUpdateStats_C, Current_Berserk_Stat) == 0x0000FA, "Member 'UCalcEpicMonsterUpdateStats_C::Current_Berserk_Stat' has a wrong offset!");
static_assert(offsetof(UCalcEpicMonsterUpdateStats_C, Current_Stress_Stat) == 0x0000FB, "Member 'UCalcEpicMonsterUpdateStats_C::Current_Stress_Stat' has a wrong offset!");

}

