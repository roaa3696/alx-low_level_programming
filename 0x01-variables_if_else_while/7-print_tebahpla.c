#include <stdio.h>

/**
 * print lowwer case alphabet reversed
 * return = 0
 */

int main (void)
{
     char c;
     for (c = 'z'; c >= 'a'; c--)
     {
         putchar(c);
     }
     putchar('\n');
     return (0);
}