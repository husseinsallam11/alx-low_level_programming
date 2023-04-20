#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: ch to print
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
