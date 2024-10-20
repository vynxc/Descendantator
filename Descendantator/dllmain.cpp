#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "SDK/Engine_classes.hpp"
#include "SDK/M1_classes.hpp"
#include "ZeroGui.h"
#include "ZeroInput.h"
void virtual_hook(void* addr, void* pDes, int index, void** ret)
{

    auto vtable = *(uintptr_t**)addr;

    int methods = 0;
    do
    {
        ++methods;
    } while (*(uintptr_t*)((uintptr_t)vtable + (methods * 0x8)));

    auto vtable_buf = new uint64_t[methods * 0x8];
    for (auto count = 0; count < methods; ++count)
    {
        vtable_buf[count] = *(uintptr_t*)((uintptr_t)vtable + (count * 0x8));

        *ret = (void*)vtable[index];

        vtable_buf[index] = (uintptr_t)(pDes);
        *(uint64_t**)addr = vtable_buf;
    }
}
typedef void(__thiscall* PostRenderOriginal_t)(SDK::UGameViewportClient*, SDK::UCanvas*);
PostRenderOriginal_t PostRenderOriginal;
void Tick()
{
    ZeroGUI::Input::Handle();

    static bool menu_opened = true;
    if (ZeroGUI::Input::IsKeyPressed(VK_PRIOR, false))
    {
        menu_opened = !menu_opened;
    }


    //define pos 
	FVector2D pos = FVector2D{ 200.0f, 150.0f };
    if (ZeroGUI::Window("Superior UE4 GUI", &pos, FVector2D{ 500.0f, 400.0f }, menu_opened))
    {
        static int tab = 0;
        if (ZeroGUI::ButtonTab("Tab 1", FVector2D{ 110, 25 }, tab == 0)) tab = 0;
        if (ZeroGUI::ButtonTab("Tab 2", FVector2D{ 110, 25 }, tab == 1)) tab = 1;
        if (ZeroGUI::ButtonTab("Tab 3", FVector2D{ 110, 25 }, tab == 2)) tab = 2;
        if (ZeroGUI::ButtonTab("Tab 4", FVector2D{ 110, 25 }, tab == 3)) tab = 3;
        ZeroGUI::NextColumn(130.0f);

        static bool text_check = false;
        static float text_slider = 15.0f;
        static int test_hotkey = 0x2;
        static FLinearColor test_color{ 0.0f, 0.0f, 1.0f, 1.0f };

        ZeroGUI::Checkbox("Test Checkbox", &text_check);
        ZeroGUI::SliderFloat("Test Slider", &text_slider, 0.0f, 180.0f);
        ZeroGUI::Hotkey("Test Hotkey", FVector2D{ 80, 25 }, &test_hotkey);

        ZeroGUI::Text("Left aligned text!");
        ZeroGUI::Text("Outline and Center aligned text!", true, true);

    }
    ZeroGUI::Render();
    ZeroGUI::Draw_Cursor(menu_opened);
}


void PostRenderHook(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
{
    ZeroGUI::SetupCanvas(canvas);
    SDK::UWorld* World = SDK::UWorld::GetWorld();
    if (!World || !World->OwningGameInstance || World->OwningGameInstance->LocalPlayers.Num() == 0)
        return;

    const auto LocalPlayer = World->OwningGameInstance->LocalPlayers[0];
    if (!LocalPlayer || !LocalPlayer->PlayerController)
        return;

    int32 ViewportSizeX, ViewportSizeY;
    LocalPlayer->PlayerController->GetViewportSize(&ViewportSizeX, &ViewportSizeY);

    auto ViewTarget = LocalPlayer->PlayerController->GetViewTarget();
    if (!ViewTarget)
        return;

    static SDK::TArray<SDK::AActor*> Actors;
    UGameplayStatics::GetAllActorsOfClass(World, SDK::AActor::StaticClass(), &Actors);

    for (int32 i = 0; i < Actors.Num(); ++i)
    {
        if (!Actors.IsValidIndex(i))
            continue;

        if (!Actors[i]->IsA(SDK::AM1Character::StaticClass()))
            continue;

        auto actor = static_cast<SDK::AM1Character*>(Actors[i]);
        if (!actor || actor == ViewTarget || !actor->RootComponent || actor->IsDead())
            continue;

        SDK::FVector Origin, BoxExtent;
        actor->GetActorBounds(true, &Origin, &BoxExtent, false);

        SDK::FVector2D ScreenPos;
        if (LocalPlayer->PlayerController->ProjectWorldLocationToScreen(Origin, &ScreenPos, true))
        {
            if (ScreenPos.X >= 0 && ScreenPos.X <= ViewportSizeX && ScreenPos.Y >= 0 && ScreenPos.Y <= ViewportSizeY)
            {
                SDK::FLinearColor color = LocalPlayer->PlayerController->LineOfSightTo(actor, Origin, 0)
                    ? SDK::FLinearColor(0.0f, 1.0f, 0.0f, 1.0f)  // Green if in line of sight
                    : SDK::FLinearColor(1.0f, 0.0f, 0.0f, 1.0f); // Red if not in line of sight

                float BoxWidth = 40.0f;  
                float BoxHeight = 60.0f; 

                SDK::FVector2D BoxPos = SDK::FVector2D(ScreenPos.X - BoxWidth / 2, ScreenPos.Y - BoxHeight / 2);

                ZeroGUI::drawFilledRect(BoxPos, BoxWidth, BoxHeight, color);
            }
        }
    }

    PostRenderOriginal(viewport, canvas);
}




    DWORD MainThread(LPVOID lpReserved)
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


        auto vtable = (void*)engine->GameViewport;

        virtual_hook(vtable, PostRenderHook, 111, (void**)&PostRenderOriginal);



        while (GetAsyncKeyState(VK_F1) == 0)
        {

            Sleep(1000);
        }

        fclose(f);
        FreeConsole();
        return 0;
    }

BOOL APIENTRY DllMain(IN HMODULE hMod, IN DWORD dwReason, IN LPVOID lpReserved)
{
    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hMod);
        CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
        break;

    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}