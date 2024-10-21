#pragma once
#include <cstdio>
#include <cstdint>
#include <Windows.h>

class Helpers
{
public:
    static void CreateConsole();
    static void VirtualHook(void* addr, void* pDes, int index, void** ret);
    static void CloseConsole();

private:
    static FILE* f;
};
