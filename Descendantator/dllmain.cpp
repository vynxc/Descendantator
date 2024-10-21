#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "GlobalContext.hpp"
#include "Helpers.hpp"
#include "Renderer.hpp"


DWORD MainThread(LPVOID lpReserved)
{
	Helpers::CreateConsole();
	printf("Descendantator\n");
	printf("By: vynxc\n");
	
	if (!GlobalContext::SetGlobals())
	{
		printf("Failed to set globals\n");
		return 0;
	}
	Renderer::Init();
	while (GetAsyncKeyState(VK_F1) == 0)
	{

		Sleep(1000);
	}

	Helpers::CloseConsole();
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
