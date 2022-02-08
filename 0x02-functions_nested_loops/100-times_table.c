#include "main.h"

/**
 * print_time_table - print the n table
 * @n: n
 */

void print_times_table(int n)
{
	if (0 <= n && n <= 15)
	{
		int i, j, r;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');

			for (j = 1; j <= n; j++)
			{
				r = i * j;

				if (r < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(r / 100 + '0');
					_putchar((r / 10) % 10 + '0');
					_putchar(r % 10 + '0');
				}

				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
