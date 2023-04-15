#include <stdio.h>
#include "main.h"

/*
 * main - program that prints its name
 * @argc: no of arg
 * @argv: array
 * Return: 0
 */

int main(int argc , char* argv[])
{
	printf("%s\n" , *argv);

	return(0);
}
