#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: no of args
 * @argv: array of args
 *
 * Return: 0 or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mul , n1 , n2;

	if (argc < 3 || argc > 3)
	{
		printf("ERROR\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	mul = n1 * n2;

	printf("%d\n", mul);

	return (0);
	
}
