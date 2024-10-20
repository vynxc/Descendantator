#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Viessa_Active01_IceBeam

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Viessa_Active01_IceBeam.Viessa_Active01_IceBeam_C
// 0x0028 (0x0C40 - 0x0C18)
class AViessa_Active01_IceBeam_C final : public AM1AbilityProjectile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         IceBindLevelByHit;                                 // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IceBindLevelByExplosion;                           // 0x0C24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ProjectileHitActor;                                // 0x0C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ProjectileExplosionTargetActors;                   // 0x0C30(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ProcessExplosionToActor(class AActor* OtherActor, const struct FHitResult& ExplosionResult);
	void OnEvent_46555BE444D896771F1D178692C2B76B(const struct FM1CalcDamageInfo& DamageInfo);
	void ExecuteUbergraph_Viessa_Active01_IceBeam(int32 EntryPoint);
	void BP_OnPreProcessHit(class AActor* OtherActor, const struct FHitResult& HitResult, const bool bPenetrated);
	void BP_OnPostSpawnAbilityActor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Viessa_Active01_IceBeam_C">();
	}
	static class AViessa_Active01_IceBeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AViessa_Active01_IceBeam_C>();
	}
};
static_assert(alignof(AViessa_Active01_IceBeam_C) == 0x000008, "Wrong alignment on AViessa_Active01_IceBeam_C");
static_assert(sizeof(AViessa_Active01_IceBeam_C) == 0x000C40, "Wrong size on AViessa_Active01_IceBeam_C");
static_assert(offsetof(AViessa_Active01_IceBeam_C, UberGraphFrame) == 0x000C18, "Member 'AViessa_Active01_IceBeam_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AViessa_Active01_IceBeam_C, IceBindLevelByHit) == 0x000C20, "Member 'AViessa_Active01_IceBeam_C::IceBindLevelByHit' has a wrong offset!");
static_assert(offsetof(AViessa_Active01_IceBeam_C, IceBindLevelByExplosion) == 0x000C24, "Member 'AViessa_Active01_IceBeam_C::IceBindLevelByExplosion' has a wrong offset!");
static_assert(offsetof(AViessa_Active01_IceBeam_C, ProjectileHitActor) == 0x000C28, "Member 'AViessa_Active01_IceBeam_C::ProjectileHitActor' has a wrong offset!");
static_assert(offsetof(AViessa_Active01_IceBeam_C, ProjectileExplosionTargetActors) == 0x000C30, "Member 'AViessa_Active01_IceBeam_C::ProjectileExplosionTargetActors' has a wrong offset!");

}

