#include <stdio.h>

/**
 * main - prints all cominations of 2 digits
 * Return: 0
 */

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);

				if (num1+num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}
