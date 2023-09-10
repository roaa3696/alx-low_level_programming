#include <stdio.h>

/**
 * print numbers 0-9
 * return = 0
 */

int main (void)
{
    int i;
    for (i = 48; i < 58; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}