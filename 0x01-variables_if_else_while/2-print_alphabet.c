#include <stdio.h>

// prints the alphabets

int main (void)
{
    char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < 26; i++)
    {
        putchar(alphabets[i]);
    }
    putchar('\n');
    return (0);
}
