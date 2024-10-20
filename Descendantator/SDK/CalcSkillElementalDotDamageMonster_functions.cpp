#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillElementalDotDamageMonster

#include "Basic.hpp"

#include "CalcSkillElementalDotDamageMonster_classes.hpp"
#include "CalcSkillElementalDotDamageMonster_parameters.hpp"


namespace SDK
{

// Function CalcSkillElementalDotDamageMonster.CalcSkillElementalDotDamageMonster_C.DoCalculation
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FM1AbilityOpCalcParam            Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FM1CalcDamageInfo                DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UCalcSkillElementalDotDamageMonster_C::DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalcSkillElementalDotDamageMonster_C", "DoCalculation");

	Params::CalcSkillElementalDotDamageMonster_C_DoCalculation Parms{};

	Parms.Param = std::move(Param);
	Parms.DamageInfo = std::move(DamageInfo);

	UObject::ProcessEvent(Func, &Parms);

	Param = std::move(Parms.Param);
	DamageInfo = std::move(Parms.DamageInfo);
}

}

