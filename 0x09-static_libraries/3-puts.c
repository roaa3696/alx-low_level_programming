#include "main.h"
/**
 * _puts - program prints a string to stodout
 * @str: the string that will be printed
 * _putchar prints news line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
