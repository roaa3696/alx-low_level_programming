#include <stdio.h>

/**
 * prints all possible different combinations of three digits
 * Return = 0 (Success)
 */


int main(void)
{
    int n, m, j;
    for (n = 48; n < 58; n++)
    {
        {
            for (j = 50; j < 58; j++)
                {
                    if (j > m && m > n)
                    {
                        putchar(n);
                        putchar(m);
                        putchar(j);
                        if (n != 55 || m != 56)
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                }
        }
    }
    putchar('\n');
    return (0);
}