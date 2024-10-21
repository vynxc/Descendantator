#pragma once
#include "SDK/Engine_classes.hpp"
#include "SDK/M1_classes.hpp"

struct GlobalContext
{
    static SDK::UWorld* World;
    static SDK::UEngine* Engine;
    static SDK::UM1LocalPlayer* LocalPlayer;
    static SDK::AM1Character* LocalCharacter;
    static SDK::AM1GameState* GameState;

    static bool SetGlobals();
    static bool CheckGlobals();
};
