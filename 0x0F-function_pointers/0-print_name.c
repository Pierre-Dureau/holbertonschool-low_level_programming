#include "function_pointers.h"

/**
 * print_name - Print name
 *
 * @name: The name
 * @f: The function called to print
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
