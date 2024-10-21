#pragma once
#include <Windows.h>

namespace ZeroGUI
{
    namespace Input
    {
        bool mouseDown[5];
        bool mouseDownAlready[256];
        bool keysDown[256];
        bool keysDownAlready[256];

        bool IsAnyMouseDown()
        {
            for (int i = 0; i < 5; i++)
                if (mouseDown[i]) return true;
            return false;
        }

        bool IsMouseClicked(int button, int element_id, bool repeat)
        {
            if (mouseDown[button])
            {
                if (!mouseDownAlready[element_id])
                {
                    mouseDownAlready[element_id] = true;
                    return true;
                }
                if (repeat)
                    return true;
            }
            else
            {
                mouseDownAlready[element_id] = false;
            }
            return false;
        }

        bool IsKeyPressed(int key, bool repeat)
        {
            if (keysDown[key])
            {
                if (!keysDownAlready[key])
                {
                    keysDownAlready[key] = true;
                    return true;
                }
                if (repeat)
                    return true;
            }
            else
            {
                keysDownAlready[key] = false;
            }
            return false;
        }

        void Handle()
        {
            for (int i = 0; i < 256; i++)
            {
                if (GetAsyncKeyState(i) & 0x8000)
                {
                    keysDown[i] = true;
                }
                else
                {
                    keysDown[i] = false;
                }
            }

            for (int i = 0; i < 5; i++)
            {
                if (GetAsyncKeyState(0x01 + i))
                    mouseDown[i] = true;
                else
                    mouseDown[i] = false;
            }
        }
    }
}