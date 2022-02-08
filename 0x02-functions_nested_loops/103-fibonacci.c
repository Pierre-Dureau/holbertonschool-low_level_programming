#include "main.h"
#include <stdio.h>

/**
 * main - Print the sum of the even-valued terms of the Fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long int n, m, p;

	n = 1;
	m = 1;
	p = 0;

	while (n < 4000000 && m < 4000000)
	{
		if (i % 2 == 0)
		{
			n = n + m;
			if (n % 2 == 0)
			{
				p += n;
			}
		}
		else
		{
			m = m + n;
			if (m % 2 == 0)
			{
				p += m;
			}
		}
		i++;
	}

	printf("%ld\n", p);

	return (0);
}
