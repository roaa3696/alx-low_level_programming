#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print alphabet except q && e
 * 
 * return = 0
*/

int main(void)
{
    int i;

    for (i = 97; i < 123; i++)
    {
        if (i != 101 && i !=113)
        {
        putchar(i);
        }
    }
    putchar('\n');
    return 0;
}