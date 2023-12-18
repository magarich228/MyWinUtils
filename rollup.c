#include <stdio.h>
#include <Windows.h>

int main(void)
{
    HWND foreground = GetForegroundWindow();
    printf("%d", CloseWindow(foreground));
}