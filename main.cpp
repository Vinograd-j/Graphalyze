#include <string>
#include <Windows.h>
#include <tchar.h>
#include "interface.h"

int  WINAPI  WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    WNDCLASSEX wc = {0};
    wc.cbSize = sizeof(wc);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.hInstance = hInstance;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszClassName = "MyWindowClass";
    RegisterClassEx(&wc);

    Interface anInterface(hInstance);

    anInterface.CreateNewWindow("Hello", WS_OVERLAPPED, "MyWindowClass", nullptr);

    anInterface.Show();
}
