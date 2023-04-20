#include <stdlib.h>
#include "function_pointers.h"

/**
 * name_printing - prints a name
 * @name: ch to print
 * @f: pointer
 */

void name_printing(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
