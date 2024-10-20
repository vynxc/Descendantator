#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_002_MissionVeacon

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_NPC_002_MissionVeacon.AnimBP_NPC_002_MissionVeacon_C
// 0x0340 (0x0800 - 0x04C0)
class UAnimBP_NPC_002_MissionVeacon_C final : public UM1NpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x04C8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x04D0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04D8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x04F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0520(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0548(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0570(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0598(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x05E0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0600(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0648(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0668(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x06B0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x06D0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0718(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0738(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_83A1E8B649A3CC134AF560A46C40F132();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_928235D34CED8EBA9F119282BADFA3FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_B3BE84E546BBF066F08EB281B7F2C94F();
	void ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_NPC_002_MissionVeacon_C">();
	}
	static class UAnimBP_NPC_002_MissionVeacon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_NPC_002_MissionVeacon_C>();
	}
};
static_assert(alignof(UAnimBP_NPC_002_MissionVeacon_C) == 0x000010, "Wrong alignment on UAnimBP_NPC_002_MissionVeacon_C");
static_assert(sizeof(UAnimBP_NPC_002_MissionVeacon_C) == 0x000800, "Wrong size on UAnimBP_NPC_002_MissionVeacon_C");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, UberGraphFrame) == 0x0004C0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimBlueprintExtension_PropertyAccess) == 0x0004C8, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimBlueprintExtension_Base) == 0x0004D0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_Root) == 0x0004D8, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_TransitionResult_3) == 0x0004F8, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_TransitionResult_2) == 0x000520, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_TransitionResult_1) == 0x000548, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_TransitionResult) == 0x000570, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_SequencePlayer_3) == 0x000598, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateResult_3) == 0x0005E0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_SequencePlayer_2) == 0x000600, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateResult_2) == 0x000648, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_SequencePlayer_1) == 0x000668, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateResult_1) == 0x0006B0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_SequencePlayer) == 0x0006D0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateResult) == 0x000718, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateMachine) == 0x000738, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateMachine' has a wrong offset!");

}

