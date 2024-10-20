#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleStatusEffect_VFXPlay

#include "Basic.hpp"

#include "SimpleStatusEffect_VFXPlay_classes.hpp"
#include "SimpleStatusEffect_VFXPlay_parameters.hpp"


namespace SDK
{

// Function SimpleStatusEffect_VFXPlay.SimpleStatusEffect_VFXPlay_C.ExecuteUbergraph_SimpleStatusEffect_VFXPlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleStatusEffect_VFXPlay_C::ExecuteUbergraph_SimpleStatusEffect_VFXPlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleStatusEffect_VFXPlay_C", "ExecuteUbergraph_SimpleStatusEffect_VFXPlay");

	Params::SimpleStatusEffect_VFXPlay_C_ExecuteUbergraph_SimpleStatusEffect_VFXPlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleStatusEffect_VFXPlay.SimpleStatusEffect_VFXPlay_C.BP_OnPeriod
// (Event, Public, BlueprintEvent)

void USimpleStatusEffect_VFXPlay_C::BP_OnPeriod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleStatusEffect_VFXPlay_C", "BP_OnPeriod");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleStatusEffect_VFXPlay.SimpleStatusEffect_VFXPlay_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleStatusEffect_VFXPlay_C::BP_OnDeactivated(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleStatusEffect_VFXPlay_C", "BP_OnDeactivated");

	Params::SimpleStatusEffect_VFXPlay_C_BP_OnDeactivated Parms{};

	Parms.bCancelled = bCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleStatusEffect_VFXPlay.SimpleStatusEffect_VFXPlay_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USimpleStatusEffect_VFXPlay_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleStatusEffect_VFXPlay_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

