#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MultiplyMoveSpeed

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MultiplyMoveSpeed.MultiplyMoveSpeed_C
// 0x0010 (0x0108 - 0x00F8)
class UMultiplyMoveSpeed_C final : public UM1AbilityOpExecCalc
{
public:
	double                                        Multiply;                                          // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   RunSpeed;                                          // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   SprintSpeed;                                       // 0x0101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   ZoomMoveSpeed;                                     // 0x0102(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   AimMoveSpeed;                                      // 0x0103(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Execute(const struct FM1AbilityOpCalcParam& Param, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MultiplyMoveSpeed_C">();
	}
	static class UMultiplyMoveSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiplyMoveSpeed_C>();
	}
};
static_assert(alignof(UMultiplyMoveSpeed_C) == 0x000008, "Wrong alignment on UMultiplyMoveSpeed_C");
static_assert(sizeof(UMultiplyMoveSpeed_C) == 0x000108, "Wrong size on UMultiplyMoveSpeed_C");
static_assert(offsetof(UMultiplyMoveSpeed_C, Multiply) == 0x0000F8, "Member 'UMultiplyMoveSpeed_C::Multiply' has a wrong offset!");
static_assert(offsetof(UMultiplyMoveSpeed_C, RunSpeed) == 0x000100, "Member 'UMultiplyMoveSpeed_C::RunSpeed' has a wrong offset!");
static_assert(offsetof(UMultiplyMoveSpeed_C, SprintSpeed) == 0x000101, "Member 'UMultiplyMoveSpeed_C::SprintSpeed' has a wrong offset!");
static_assert(offsetof(UMultiplyMoveSpeed_C, ZoomMoveSpeed) == 0x000102, "Member 'UMultiplyMoveSpeed_C::ZoomMoveSpeed' has a wrong offset!");
static_assert(offsetof(UMultiplyMoveSpeed_C, AimMoveSpeed) == 0x000103, "Member 'UMultiplyMoveSpeed_C::AimMoveSpeed' has a wrong offset!");

}

