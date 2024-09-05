#include <Windows.h>
#include <stdio.h>

DWORD blackScreenHz = 144;// change this to the problematic refresh rate you have
DWORD goodHz = 60; // this to the good one

int main()
{
    Sleep(1000);
    DISPLAY_DEVICEA displayDevice;
    displayDevice.cb = sizeof(DISPLAY_DEVICEA);

    EnumDisplayDevicesA(NULL, 0, &displayDevice, 0);
    DEVMODE dm;
    while (1)
    {
        if (0 != EnumDisplaySettingsA(displayDevice.DeviceName, ENUM_CURRENT_SETTINGS, &dm))
        {
            if (dm.dmDisplayFrequency == blackScreenHz)
            {
                dm.dmDisplayFrequency = goodHz;
                ChangeDisplaySettingsExA(displayDevice.DeviceName, &dm, NULL, 0, 0);
                printf("display changed succesfully");
            }
            else
            {
                printf("good hz so no\n");
            }
        }
        Sleep(5000);
    }
}