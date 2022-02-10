#include "main.h"

/**
 * print_line - Print "_" n times
 *
 * @n: Number of times
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar("_");
	}
	_putchar('\n');
}
