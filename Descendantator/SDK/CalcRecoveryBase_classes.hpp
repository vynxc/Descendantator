#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcRecoveryBase

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcRecoveryBase.CalcRecoveryBase_C
// 0x0008 (0x0100 - 0x00F8)
#pragma pack(push, 0x1)
class alignas(0x08) UCalcRecoveryBase_C : public UM1AbilityOpExecCalc_Recovery
{
public:
	EM1StatType                                   RecoveryStatType;                                  // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatRefType                                GiveRecoveryCoefficientStatRefType;                // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyCommonRecovery(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, double RecoveryAmount, EM1RecoveryType RecoveryType, EM1StatType RecoveryStat) const;
	void ApplyMaxStatBaseRecovery(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& Damage_info, EM1StatType BaseStatType, double RecoveryAmount, EM1StatType RecoveryStatType_0) const;
	void ApplyRecoveryCoefficient(bool UseRecoveryCoefficient, struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1StatType GiveRecoveryCoefficientStatType, EM1StatType TakeRecoveryCoefficientStatType) const;
	void ApplySkillATK(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1ElementalDamageChannel ElementalChannel, EM1SkillArcheType ArcheType, const struct FM1ScaledInteger& AddPower, const struct FM1ScaledInteger& AddAttack, bool IsHittingPC) const;
	void DetermineRecoveryCoefficient(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, EM1StatType StatType, bool* UseRecoveryCoefficient, EM1StatType* TakeRecoveryCoefficient, EM1StatType* GiveRecoveryCoefficient) const;
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;
	void Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const;
	void SetRecoveryOutModifier(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcRecoveryBase_C">();
	}
	static class UCalcRecoveryBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcRecoveryBase_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(UCalcRecoveryBase_C) == 0x000008, "Wrong alignment on UCalcRecoveryBase_C");
static_assert(sizeof(UCalcRecoveryBase_C) == 0x000100, "Wrong size on UCalcRecoveryBase_C");
static_assert(offsetof(UCalcRecoveryBase_C, RecoveryStatType) == 0x0000F8, "Member 'UCalcRecoveryBase_C::RecoveryStatType' has a wrong offset!");
static_assert(offsetof(UCalcRecoveryBase_C, GiveRecoveryCoefficientStatRefType) == 0x0000F9, "Member 'UCalcRecoveryBase_C::GiveRecoveryCoefficientStatRefType' has a wrong offset!");

}

