#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrologueBunnyPath

#include "Basic.hpp"

#include "PrologueBunnyPath_classes.hpp"
#include "PrologueBunnyPath_parameters.hpp"


namespace SDK
{

// Function PrologueBunnyPath.PrologueBunnyPath_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrologueBunnyPath_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrologueBunnyPath_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

