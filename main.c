#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int baseFrequency = 440;
    int step = 40;

    while (1) {
        for (int i = 1; i <= 8; ++i) {
            char key = '0' + i;
            if (GetAsyncKeyState(key) & 0x8001) {
                printf("Playing %dth sound!\n", i);
                Beep(baseFrequency + (i - 1) * step, 1000);
            }
        }
        Sleep(10);
    }

    return 0;
}
