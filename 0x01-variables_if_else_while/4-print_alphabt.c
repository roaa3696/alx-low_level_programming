#include <stdio.h>

/**
 * print alphabet except q && e
 * return = 0
*/

int main(void)
{
    int i = 0;
    char alpha[24]="abcdfghijklmnopurstuvwxyz";

    for (i = 0; i < 24; i++)
    {
        putchar(alpha[i]);
    }
    putchar('\n');
    return 0;
}