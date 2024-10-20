#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Invasion_EnergyEmitter_0

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Invasion_EnergyEmitter.Invasion_EnergyEmitter_C
// 0x0030 (0x04A0 - 0x0470)
class AInvasion_EnergyEmitter_C final : public AM1Weapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1WeaponFireLoopComponent*             M1WeaponFireLoop;                                  // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Item_PickupWeapon_Indicator_01;                 // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1WeaponChargeComponent*               M1WeaponCharge;                                    // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1WeaponMagazineReloadComponent*       M1WeaponMagazineReload;                            // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1WeaponInstantHitComponent*           M1WeaponInstantHit;                                // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Invasion_EnergyEmitter(int32 EntryPoint);
	void ReserveDestroy(float LifeSpan);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Invasion_EnergyEmitter_C">();
	}
	static class AInvasion_EnergyEmitter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInvasion_EnergyEmitter_C>();
	}
};
static_assert(alignof(AInvasion_EnergyEmitter_C) == 0x000008, "Wrong alignment on AInvasion_EnergyEmitter_C");
static_assert(sizeof(AInvasion_EnergyEmitter_C) == 0x0004A0, "Wrong size on AInvasion_EnergyEmitter_C");
static_assert(offsetof(AInvasion_EnergyEmitter_C, UberGraphFrame) == 0x000470, "Member 'AInvasion_EnergyEmitter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AInvasion_EnergyEmitter_C, M1WeaponFireLoop) == 0x000478, "Member 'AInvasion_EnergyEmitter_C::M1WeaponFireLoop' has a wrong offset!");
static_assert(offsetof(AInvasion_EnergyEmitter_C, NS_Item_PickupWeapon_Indicator_01) == 0x000480, "Member 'AInvasion_EnergyEmitter_C::NS_Item_PickupWeapon_Indicator_01' has a wrong offset!");
static_assert(offsetof(AInvasion_EnergyEmitter_C, M1WeaponCharge) == 0x000488, "Member 'AInvasion_EnergyEmitter_C::M1WeaponCharge' has a wrong offset!");
static_assert(offsetof(AInvasion_EnergyEmitter_C, M1WeaponMagazineReload) == 0x000490, "Member 'AInvasion_EnergyEmitter_C::M1WeaponMagazineReload' has a wrong offset!");
static_assert(offsetof(AInvasion_EnergyEmitter_C, M1WeaponInstantHit) == 0x000498, "Member 'AInvasion_EnergyEmitter_C::M1WeaponInstantHit' has a wrong offset!");

}

