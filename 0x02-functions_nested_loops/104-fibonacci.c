#include "main.h"
#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long n, m;

	n = 1;
	printf("%lu, ", n);
	m = 1;

	for (i = 0; i < 97; i++)
	{
		if (i % 2 == 0)
		{
			n = n + m;
			printf("%lu", n);
		}
		else
		{
			m = m + n;
			printf("%lu", m);
		}

		if (i != 96)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
