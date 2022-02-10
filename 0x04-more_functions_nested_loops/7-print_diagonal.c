#include "main.h"

/**
 * print_diagonal - Print diagonal line n times
 *
 * @n: The Integers
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			if (i != 1)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
