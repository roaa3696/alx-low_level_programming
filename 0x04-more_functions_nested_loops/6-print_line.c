#include "main.h"

/**
 * print_line - draws a striaght line
 * @n: number of how much the character should be printed
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i;

        for (i == 1; i <= n; i++)
        {
            _putchar(' ');
        }
        _putchar('\n');
    }
}
