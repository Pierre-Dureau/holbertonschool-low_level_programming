#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers 0 to 14, 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				putchar('1');
			}
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
