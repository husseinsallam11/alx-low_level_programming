#include <stdio.h>

/**
 * main - prints numbers of base 16
 * Return: 0
 */

int main(void)
{
	int num = 0;

	for (num = 0 ; num <= 15 ; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
