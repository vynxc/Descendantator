#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrologueBunny

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "Bunny_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PrologueBunny.PrologueBunny_C
// 0x02A0 (0x1390 - 0x10F0)
class APrologueBunny_C final : public ABunny_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x10F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Bag;                                               // 0x10F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APrologueBunnyPath_C*                   CurSplinePath;                                     // 0x1100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        PrevDestDiff;                                      // 0x1108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveAlongPauseDistance;                            // 0x1110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveAlongResumeDistance;                           // 0x1118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveAlongSprintDistance;                           // 0x1120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMoveAlongPaused;                                  // 0x1128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisableMoveAlongPaused;                           // 0x1129(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMoveAlongArriveExactly;                           // 0x112A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMoveAlongCompleteOnPlayerApproached;              // 0x112B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLookAtPlayerOnPaused;                             // 0x112C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_112D[0x3];                                     // 0x112D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MoveAlongPathName;                                 // 0x1130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveToDestLerpAlpha;                               // 0x1138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        BridgeCrossSequence;                               // 0x1140(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AM1LevelSequenceActor*                  BridgetCrossSequenceActor;                         // 0x1160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FName>                DialogDataRow;                                     // 0x1168(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class UM1DialogAkComponent*                   DialogComp;                                        // 0x11B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class UAnimMontage*>        LookBackMontages;                                  // 0x11C0(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class UAnimMontage*                           LookBackMontage2;                                  // 0x1210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   LookBackDir;                                       // 0x1218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LookBackInterval;                                  // 0x1220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLookBackEnabled;                                  // 0x1228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1229[0x7];                                     // 0x1229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AM1EpicMonster*                         TargetEpicMonster;                                 // 0x1230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        WeaponAttackInterval;                              // 0x1238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FName>                BridgeCrossDialogDataRow1;                         // 0x1240(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TMap<class FString, struct FSoftObjectPath>   EpicMonsterFightMoveSequences;                     // 0x1290(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 EpicMonsterFightCurMove;                           // 0x12E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 EpicMonsterFightGoalMove;                          // 0x12F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFloatRange                            EpicMonsterFightMoveInterval;                      // 0x1300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EpicMonsterFightLookAtAlpha;                       // 0x1310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TSet<class FName>                             EpicMonsterHPDialogs;                              // 0x1318(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class FString                                 IsSelfRTPC;                                        // 0x1368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 IsRadioRTPC;                                       // 0x1378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void StopLookBack();
	void StartMoveAlongPath(class FName PathName, bool bDisablePause, bool bArriveExactly, bool bCompleteOnPlayerApproached, bool bLookAtPlayerOnPause);
	void StartBossBattle();
	void SelectNextEpicMonsterFightMove(class FString* OutMoveKey);
	void ResetDialogSetting();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void PlayLookBack();
	void PlayEpicMonsterFightMoveSequence();
	void PlayDialog(class FName DialogRowName);
	void PlayBridgeCrossSequence();
	void PauseCharacterMovement(bool bPause);
	void MoveToDestByLerp(const struct FTransform& Dest, double DeltaTime, bool* bFinished);
	void MoveAlongSpline(double DeltaTime, bool* bMoveComplete);
	void LookAtEpicMonster();
	void ExecuteUbergraph_PrologueBunny(int32 EntryPoint);
	void EndMoveAlongPath();
	void CustomEvent();
	void ConditionalSprint();
	void ConditionalRotateToPlayer();
	void ConditionalPauseMoveAlong(bool* bMovePaused);
	void ConditionalDialogByEpicMonsterHP(EM1StatType StatType);
	void ConditionalCompleteMoveAlong(bool* bMoveCompleted);
	void BP_OnSequenceUnbounded(const struct FAssetData& RootSequence);
	void BP_OnSequenceBounded(const struct FAssetData& RootSequence);
	void BossHPChanged(EM1StatType StatType);
	void AttackEpicMonster();
	void ApplyDialogSetting(bool bIsSelfTalking, bool bIsRadioVoice);

	void NeedResumeMoveAlong(bool* bResume) const;
	void NeedPauseMoveAlong(bool* bStop) const;
	void GetSceneNumber(const struct FAssetData& Sequence, int32* OutNumber) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PrologueBunny_C">();
	}
	static class APrologueBunny_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrologueBunny_C>();
	}
};
static_assert(alignof(APrologueBunny_C) == 0x000010, "Wrong alignment on APrologueBunny_C");
static_assert(sizeof(APrologueBunny_C) == 0x001390, "Wrong size on APrologueBunny_C");
static_assert(offsetof(APrologueBunny_C, UberGraphFrame) == 0x0010F0, "Member 'APrologueBunny_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, Bag) == 0x0010F8, "Member 'APrologueBunny_C::Bag' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, CurSplinePath) == 0x001100, "Member 'APrologueBunny_C::CurSplinePath' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, PrevDestDiff) == 0x001108, "Member 'APrologueBunny_C::PrevDestDiff' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, MoveAlongPauseDistance) == 0x001110, "Member 'APrologueBunny_C::MoveAlongPauseDistance' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, MoveAlongResumeDistance) == 0x001118, "Member 'APrologueBunny_C::MoveAlongResumeDistance' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, MoveAlongSprintDistance) == 0x001120, "Member 'APrologueBunny_C::MoveAlongSprintDistance' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, bMoveAlongPaused) == 0x001128, "Member 'APrologueBunny_C::bMoveAlongPaused' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, bDisableMoveAlongPaused) == 0x001129, "Member 'APrologueBunny_C::bDisableMoveAlongPaused' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, bMoveAlongArriveExactly) == 0x00112A, "Member 'APrologueBunny_C::bMoveAlongArriveExactly' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, bMoveAlongCompleteOnPlayerApproached) == 0x00112B, "Member 'APrologueBunny_C::bMoveAlongCompleteOnPlayerApproached' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, bLookAtPlayerOnPaused) == 0x00112C, "Member 'APrologueBunny_C::bLookAtPlayerOnPaused' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, MoveAlongPathName) == 0x001130, "Member 'APrologueBunny_C::MoveAlongPathName' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, MoveToDestLerpAlpha) == 0x001138, "Member 'APrologueBunny_C::MoveToDestLerpAlpha' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, BridgeCrossSequence) == 0x001140, "Member 'APrologueBunny_C::BridgeCrossSequence' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, BridgetCrossSequenceActor) == 0x001160, "Member 'APrologueBunny_C::BridgetCrossSequenceActor' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, DialogDataRow) == 0x001168, "Member 'APrologueBunny_C::DialogDataRow' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, DialogComp) == 0x0011B8, "Member 'APrologueBunny_C::DialogComp' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, LookBackMontages) == 0x0011C0, "Member 'APrologueBunny_C::LookBackMontages' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, LookBackMontage2) == 0x001210, "Member 'APrologueBunny_C::LookBackMontage2' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, LookBackDir) == 0x001218, "Member 'APrologueBunny_C::LookBackDir' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, LookBackInterval) == 0x001220, "Member 'APrologueBunny_C::LookBackInterval' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, bLookBackEnabled) == 0x001228, "Member 'APrologueBunny_C::bLookBackEnabled' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, TargetEpicMonster) == 0x001230, "Member 'APrologueBunny_C::TargetEpicMonster' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, WeaponAttackInterval) == 0x001238, "Member 'APrologueBunny_C::WeaponAttackInterval' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, BridgeCrossDialogDataRow1) == 0x001240, "Member 'APrologueBunny_C::BridgeCrossDialogDataRow1' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, EpicMonsterFightMoveSequences) == 0x001290, "Member 'APrologueBunny_C::EpicMonsterFightMoveSequences' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, EpicMonsterFightCurMove) == 0x0012E0, "Member 'APrologueBunny_C::EpicMonsterFightCurMove' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, EpicMonsterFightGoalMove) == 0x0012F0, "Member 'APrologueBunny_C::EpicMonsterFightGoalMove' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, EpicMonsterFightMoveInterval) == 0x001300, "Member 'APrologueBunny_C::EpicMonsterFightMoveInterval' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, EpicMonsterFightLookAtAlpha) == 0x001310, "Member 'APrologueBunny_C::EpicMonsterFightLookAtAlpha' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, EpicMonsterHPDialogs) == 0x001318, "Member 'APrologueBunny_C::EpicMonsterHPDialogs' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, IsSelfRTPC) == 0x001368, "Member 'APrologueBunny_C::IsSelfRTPC' has a wrong offset!");
static_assert(offsetof(APrologueBunny_C, IsRadioRTPC) == 0x001378, "Member 'APrologueBunny_C::IsRadioRTPC' has a wrong offset!");

}

