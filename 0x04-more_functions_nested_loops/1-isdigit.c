#include "main.h"

/**
 * _isdigit - checks for a digit (0 to 9)
 * @c: input that will be checked
 * Return: 1 if its a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
