#include "GlobalContext.hpp"
#include <cstdio>

SDK::UWorld* GlobalContext::World = nullptr;
SDK::UEngine* GlobalContext::Engine = nullptr;
SDK::UM1LocalPlayer* GlobalContext::LocalPlayer = nullptr;
SDK::AM1Character* GlobalContext::LocalCharacter = nullptr;
SDK::AM1GameState* GlobalContext::GameState = nullptr;

bool GlobalContext::SetGlobals()
{
    SDK::UWorld* world = SDK::UWorld::GetWorld();
    SDK::UEngine* engine = SDK::UEngine::GetEngine();

    if (!world || !engine)
    {
        printf("Failed to get world or engine\n");
        return false;
    }

    if (!world->GameState)
    {
        printf("Failed to get gamestate\n");
        return false;
    }

    auto localplayer = static_cast<SDK::UM1LocalPlayer*>(world->OwningGameInstance->LocalPlayers[0]);
    if (!localplayer)
    {
        printf("Failed to get local player\n");
        return false;
    }

    auto localcharacter = static_cast<SDK::AM1Character*>(localplayer->PlayerController->Character);
    if (!localcharacter)
    {
        printf("Failed to get local character\n");
        return false;
    }

    Engine = engine;
    World = world;
    LocalPlayer = localplayer;
    LocalCharacter = localcharacter;
    GameState = static_cast<SDK::AM1GameState*>(world->GameState);
    return true;
}

bool GlobalContext::CheckGlobals()
{
    return World && Engine && LocalPlayer && LocalCharacter && GameState;
}
