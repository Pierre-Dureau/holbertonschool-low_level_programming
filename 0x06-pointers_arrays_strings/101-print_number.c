#include "main.h"

/**
 * print_number - Print a number with putchar
 *
 * @n: The integer
 */

void print_number(int n)
{
	int a = 0;

	if (n == -2147483648)
	{
		n /= 10;
		a = 1;
	}

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');

	if (a == 1)
	{
		_putchar('8');
	}
}
