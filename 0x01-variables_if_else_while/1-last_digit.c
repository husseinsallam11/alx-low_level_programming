#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints n value wheter its greater 5/smalle 6/equal
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

		if (digit > 5)
			printf("Last digit of %i is %i and is greater than 5\n", n, digit);
		else if (digit == 0)
			printf("Last digit of %i is %i and is 0\n", n, digit);
		else if (digit < 6 && digit != 0)
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);

