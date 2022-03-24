#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: The number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 2147483648;
	int check = 0;

	if (n == 0)
		_putchar('0');

	while (i)
	{
		if (n & i)
		{
			_putchar('1');
			check = 1;
		}
		else if (check == 1)
			_putchar('0');

		i >>= 1;
	}
}
