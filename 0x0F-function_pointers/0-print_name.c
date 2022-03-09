#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Print name
 *
 * @name: The name
 * @f: The function called to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
