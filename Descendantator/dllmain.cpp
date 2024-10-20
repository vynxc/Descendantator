#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "SDK/Engine_classes.hpp"
#include "SDK/M1_classes.hpp"

DWORD WINAPI MainThread(LPVOID lpParam)
{
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    freopen_s(&f, "CONIN$", "r", stdin);
    printf("Descendantator\n");
    printf("By: vynxc\n");

    SDK::UEngine* engine = SDK::UEngine::GetEngine();
    if (!engine)
    {
        printf("Failed to get engine\n");
        return 0;
    }

    SDK::UWorld* world = SDK::UWorld::GetWorld();
    if (!world)
    {
        printf("Failed to get world\n");
        return 0;
    }

    auto base_local_player = world->OwningGameInstance->LocalPlayers[0];
    if (!base_local_player)
    {
        printf("Failed to get base local player\n");
        return 0;
    }

    auto local_player = static_cast<SDK::UM1LocalPlayer*>(base_local_player);
    if (!local_player)
    {
        printf("Failed to cast to local player\n");
        return 0;
    }

    auto player_controller = static_cast<SDK::AM1PlayerController*>(local_player->PlayerController);
    if (!player_controller)
    {
        printf("Failed to get player controller\n");
        return 0;
    }

    auto player = static_cast<SDK::AM1Character*>(player_controller->Character);
    if (!player)
    {
        printf("Failed to get player character\n");
        return 0;
    }

    while (GetAsyncKeyState(VK_F1) == 0)
    {
        player->Jump();
        auto display_name = player->GetDisplayName();
        if (display_name)
        {
            auto display_name_str = display_name.ToString();
            printf("Player name: %s\n", display_name_str.c_str());
        }

        auto actor_manager = player_controller->ActorManager_Subsystem;
        if (actor_manager)
        {
            for (auto actor : actor_manager->Characters)
            {
                auto actor_name = actor->GetDisplayName();
                if (actor_name)
                {
                    auto actor_name_str = actor_name.ToString();
                    printf("Actor name: %s\n", actor_name_str.c_str());
                }
            }
			for (auto actor : actor_manager->Monsters)
			{
				auto actor_name = actor.Second->GetDisplayName();
				if (actor_name)
				{
					auto actor_name_str = actor_name.ToString();
					printf("Actor name: %s\n", actor_name_str.c_str());
				}
			}
        }
        else
        {
            printf("Failed to get actor manager\n");
        }
		Sleep(1000);
    }

    fclose(f);
    FreeConsole();
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD  ul_reason_for_call,
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
        CreateThread(0, 0, MainThread, 0, 0, 0);
        break;
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
