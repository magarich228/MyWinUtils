#include <stdio.h>
#include <Windows.h>

int main(void)
{
    HWND foreground = GetForegroundWindow();

    if (!CloseWindow(foreground))
    {
        printf_s("Failed to close the window.");
    }
}