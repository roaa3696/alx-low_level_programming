#include <stdio.h>

/**
*print lower and upper case alphabets
* return = 0
*/

int main (void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    for (i = 0; i > 52; i++)
    {
        putchar(alpha[i]);
    
    }
    putchar('\n');
    return 0;
}