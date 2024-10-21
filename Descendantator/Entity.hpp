#pragma once
#include "SDK/Engine_classes.hpp"
#include "SDK/M1_structs.hpp"
struct Entity
{
    SDK::FM1StatArraySerializer Stats;
    SDK::FVector2D ScreenLocation;
    SDK::FVector WorldLocation;
    SDK::FRotator Rotation;
    bool IsMonster;
	bool IsVisible;
    int Distance;

};

