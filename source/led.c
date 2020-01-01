//All of the codes inspiration comes from jakibaki/sys-ftpd's led system on sysmodule.
//And of course ELY3M because of great explanation fo the LED system.

#include <string.h>
#include <switch.h>
#include "led.h"

void startLed(void)
{
    HidsysNotificationLedPattern pattern;
    memset(&pattern, 0, sizeof(pattern));

    pattern.baseMiniCycleDuration = 0x8;
    pattern.totalMiniCycles = 0x2;
    pattern.totalFullCycles = 0x0;
    pattern.startIntensity = 0x1;

    pattern.miniCycles[0].ledIntensity = 0xF;
    pattern.miniCycles[0].transitionSteps = 0xF;
    pattern.miniCycles[0].finalStepDuration = 0x0;
    pattern.miniCycles[1].ledIntensity = 0x1;
    pattern.miniCycles[1].transitionSteps = 0xF;
    pattern.miniCycles[1].finalStepDuration = 0x0;

    u64 UniquePadIds[5] = {0};
    memset(UniquePadIds, 0, sizeof(UniquePadIds));

    size_t total_entries = 0;

    Result rc = hidsysGetUniquePadIds(UniquePadIds, 5, &total_entries);

    if (R_SUCCEEDED(rc)) 
    {
        for(int i = 0; i < total_entries; i++) 
        {
            rc = hidsysSetNotificationLedPattern(&pattern, UniquePadIds[i]);
        }
    }
}

void shutdownLed(void)
{
    HidsysNotificationLedPattern pattern;
    memset(&pattern, 0, sizeof(pattern));

    u64 UniquePadIds[5] = {0};
    memset(UniquePadIds, 0, sizeof(UniquePadIds));

    size_t total_entries = 0;

    Result rc = hidsysGetUniquePadIds(UniquePadIds, 5, &total_entries);

    if (R_SUCCEEDED(rc)) 
    {
        for (int i = 0; i < total_entries; i++)
            hidsysSetNotificationLedPattern(&pattern, UniquePadIds[i]);
    }
}
