#include "main.h"

/**
 * _putchar -  write c to stdout
 * Return: 1 success , -1 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
