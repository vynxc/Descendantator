#pragma once
#include "SDK/Engine_classes.hpp"
#include "SDK/M1_classes.hpp"
#include "Helpers.hpp"
#include "GlobalContext.hpp"    
typedef void(__thiscall* PostRenderOriginal_t)(SDK::UGameViewportClient*, SDK::UCanvas*);

namespace Renderer
{
    void Init();
}