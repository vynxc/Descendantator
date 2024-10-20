#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "SDK/Engine_classes.hpp"
#include "SDK/M1_classes.hpp"
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
void PostRenderHook(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
{
    printf("PostRenderHook\n");
    canvas->K2_DrawLine(SDK::FVector2D{ 0,0 }, SDK::FVector2D{500,500},5,SDK::FLinearColor{ 0.30f, 0.30f, 0.80f, 1.0f });

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