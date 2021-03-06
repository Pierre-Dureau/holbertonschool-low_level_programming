#include "main.h"
#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci number
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int n, m;

	n = 1;
	printf("%ld, ", n);
	m = 1;

	for (i = 0; i < 49; i++)
	{
		if (i % 2 == 0)
		{
			n = n + m;
			printf("%ld", n);
		}
		else
		{
			m = m + n;
			printf("%ld", m);
		}

		if (i != 48)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
