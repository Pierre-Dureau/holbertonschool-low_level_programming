#include "main.h"

/**
 * times_table - Print the 9 tables
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');

		for (j = 1; j < 10; j++)
		{
			r = i * j;

			if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}

			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
