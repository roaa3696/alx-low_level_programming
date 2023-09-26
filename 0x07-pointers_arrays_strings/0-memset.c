#include "main.h"

/**
 * memset - fills memory with a constant byte
 * @s: start location of the memory
 * @b: the value
 * @n: number of bytes
 * 
 * Return: array with the new value for (n)
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
