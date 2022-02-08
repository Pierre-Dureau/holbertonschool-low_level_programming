#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to print
 *
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int r;

	n = abs(n);
	r = n % 10;
	if (n == -2147483648)
	{
		r == 8;
	}

	_putchar(r + '0');

	return (r);
}
