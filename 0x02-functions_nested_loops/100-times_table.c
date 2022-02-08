#include "main.h"

/**
 * print_diff_len - Print value with different length
 *
 * @r: the value
 */

void print_diff_len(int r)
{
	if (r < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(r + '0');
	}
	else if (r < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(r / 10 + '0');
		_putchar(r % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(r / 100 + '0');
		_putchar((r / 10) % 10 + '0');
		_putchar(r % 10 + '0');
	}
}

/**
 * print_times_table - print the n table
 * @n: n
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, r;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				r = i * j;

				print_diff_len(r);

			}
			_putchar('\n');
		}
	}
}
