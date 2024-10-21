#include "Renderer.hpp"

namespace Renderer
{
    PostRenderOriginal_t PostRenderOriginal;
    void render(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
    {
        canvas->K2_DrawLine(SDK::FVector2D(0.0f, 0.0f), SDK::FVector2D(500.0f, 500.0f), 2.0f, SDK::FLinearColor(1.0f, 0.0f, 0.0f, 1.0f));
        Renderer::PostRenderOriginal(viewport, canvas);
    }
    void Init()
    {
        if (!GlobalContext::CheckGlobals())
        {
			printf("GlobalContext check failed\n");
			return;

        }
        auto vtable = (void*)GlobalContext::Engine->GameViewport;
        Helpers::VirtualHook(vtable, render, 111, reinterpret_cast<void**>(&PostRenderOriginal));
    }

   
}