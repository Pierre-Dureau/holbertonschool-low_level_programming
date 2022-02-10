#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print a triangle
 *
 * @size: Size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < i - 1; j++)
			{
				putchar(' ');
			}

			for (j = j; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}

}
