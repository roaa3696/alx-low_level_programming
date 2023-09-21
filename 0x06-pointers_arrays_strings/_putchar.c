#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error, -1 is returned
 */

int_putchar(char c)
{
return (write(1, &c, 1));
}
