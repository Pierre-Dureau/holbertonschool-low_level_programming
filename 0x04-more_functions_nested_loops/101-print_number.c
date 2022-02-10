#include "main.h"
#include <stdio.h>

/**
 * main - print an integer with putchar
 *
 * @n: The integer
 */

void print_number(int n)
{
	if (n < 0) {
		putchar('-');
		n = n * -1;
	}

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10+ '0');
}
