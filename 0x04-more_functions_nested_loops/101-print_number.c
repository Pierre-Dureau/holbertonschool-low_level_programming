#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer with putchar
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
		putchar('-');
		n = n * -1;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	putchar(n % 10 + '0');

	if (a == 1)
	{
		putchar('8');
	}

}
