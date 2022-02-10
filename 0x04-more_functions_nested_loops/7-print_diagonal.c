#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Print diagonal line n times
 *
 * @n: The Integers
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				for (j = 0; j < i; j++)
				{
					putchar(' ');
				}
				putchar('\\');
			}
			else
			{
				putchar('\\');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
