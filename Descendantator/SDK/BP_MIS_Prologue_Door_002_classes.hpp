#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MIS_Prologue_Door_002

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MIS_Prologue_Door_002.BP_MIS_Prologue_Door_002_C
// 0x0070 (0x04F8 - 0x0488)
class ABP_MIS_Prologue_Door_002_C final : public AM1MissionTaskDoor
{
public:
	class UBoxComponent*                          Door;                                              // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_Root;                                         // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_Ani;                                          // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_Pillar02A_HJS3;                      // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_Pillar02A_HJS;                       // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_Pillar02A_HJS1;                      // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Collision1;                                        // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_Pillar02A_HJS2;                      // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_ThinWall01A_CSW;                     // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Collision;                                         // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_PillarB02A_CSW;                      // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_Barricade01A_CSW1;                   // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_Barricade01A_CSW;                    // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_HeavenRuin_PillarB02A_CSW1;                     // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class UShapeComponent* BP_GetNavObstacleComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MIS_Prologue_Door_002_C">();
	}
	static class ABP_MIS_Prologue_Door_002_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MIS_Prologue_Door_002_C>();
	}
};
static_assert(alignof(ABP_MIS_Prologue_Door_002_C) == 0x000008, "Wrong alignment on ABP_MIS_Prologue_Door_002_C");
static_assert(sizeof(ABP_MIS_Prologue_Door_002_C) == 0x0004F8, "Wrong size on ABP_MIS_Prologue_Door_002_C");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, Door) == 0x000488, "Member 'ABP_MIS_Prologue_Door_002_C::Door' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, Door_Root) == 0x000490, "Member 'ABP_MIS_Prologue_Door_002_C::Door_Root' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, Door_Ani) == 0x000498, "Member 'ABP_MIS_Prologue_Door_002_C::Door_Ani' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_Pillar02A_HJS3) == 0x0004A0, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_Pillar02A_HJS3' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_Pillar02A_HJS) == 0x0004A8, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_Pillar02A_HJS' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_Pillar02A_HJS1) == 0x0004B0, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_Pillar02A_HJS1' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, Collision1) == 0x0004B8, "Member 'ABP_MIS_Prologue_Door_002_C::Collision1' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_Pillar02A_HJS2) == 0x0004C0, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_Pillar02A_HJS2' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_ThinWall01A_CSW) == 0x0004C8, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_ThinWall01A_CSW' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, Collision) == 0x0004D0, "Member 'ABP_MIS_Prologue_Door_002_C::Collision' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_PillarB02A_CSW) == 0x0004D8, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_PillarB02A_CSW' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_Barricade01A_CSW1) == 0x0004E0, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_Barricade01A_CSW1' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_Barricade01A_CSW) == 0x0004E8, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_Barricade01A_CSW' has a wrong offset!");
static_assert(offsetof(ABP_MIS_Prologue_Door_002_C, SM_HeavenRuin_PillarB02A_CSW1) == 0x0004F0, "Member 'ABP_MIS_Prologue_Door_002_C::SM_HeavenRuin_PillarB02A_CSW1' has a wrong offset!");

}

