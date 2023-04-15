#include <stdio.h>
#include "main.h"

/**
 * main - program that prints no of argument
 * @argc: no of arg
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
