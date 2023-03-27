#include "main.h"

/**
 * _puts - print string followed by anew line
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
