#include <stdio.h>

/**
 * main - prints all possible combinations of single numbers
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++
	}
	putchar('\n');

	return (0);
}
