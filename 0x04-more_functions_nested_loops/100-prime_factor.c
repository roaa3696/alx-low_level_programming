#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prin=me factor 
 * of the number 612852475143 followwed by anew line
 * Return: 0 (success)
 */
int main(void)
{
    long int n;
    long int max;
    long int i;

    n = 612852475143;
    max = -1;

    while (n % 2 == 0)
    {
        max = 2;
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            max = i;
            n = n / i;
        }
    }
}
