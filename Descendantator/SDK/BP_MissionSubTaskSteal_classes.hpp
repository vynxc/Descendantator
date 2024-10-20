#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionSubTaskSteal

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionSubTaskSteal.BP_MissionSubTaskSteal_C
// 0x0018 (0x0678 - 0x0660)
class ABP_MissionSubTaskSteal_C final : public AM1MissionSubTaskActorSteal
{
public:
	class UNiagaraComponent*                      InteractionAreaFx;                                 // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionSubTaskSteal_C">();
	}
	static class ABP_MissionSubTaskSteal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionSubTaskSteal_C>();
	}
};
static_assert(alignof(ABP_MissionSubTaskSteal_C) == 0x000008, "Wrong alignment on ABP_MissionSubTaskSteal_C");
static_assert(sizeof(ABP_MissionSubTaskSteal_C) == 0x000678, "Wrong size on ABP_MissionSubTaskSteal_C");
static_assert(offsetof(ABP_MissionSubTaskSteal_C, InteractionAreaFx) == 0x000660, "Member 'ABP_MissionSubTaskSteal_C::InteractionAreaFx' has a wrong offset!");
static_assert(offsetof(ABP_MissionSubTaskSteal_C, Billboard) == 0x000668, "Member 'ABP_MissionSubTaskSteal_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_MissionSubTaskSteal_C, Niagara) == 0x000670, "Member 'ABP_MissionSubTaskSteal_C::Niagara' has a wrong offset!");

}

