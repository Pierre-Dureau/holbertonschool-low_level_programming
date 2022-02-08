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
	unsigned long fib1, fib2, fib3, fib4;

	fib1 = 1;
	printf("%lu\n", fib1);
	fib2 = 1;

	for (i = 0; i < 97; i++)
	{
		if (i % 2 == 0)
		{
			fib1 = fib1 + fib2;
			printf("%lu\n", fib1);

			if (fib1 > 10000000000)
			{
				fib4 = fib1 % 10000000000;
				fib3 = fib1 / 10000000000;
				fib1 = fib2 / 10000000000;
				fib2 = fib2 % 10000000000;
				break;
			}

		}
		else
		{
			fib2 = fib1 + fib2;
			printf("%lu\n", fib2);

			if (fib2 > 10000000000)
			{
				fib4 = fib2 % 10000000000;
				fib3 = fib2 / 10000000000;
				fib2 = fib1 % 10000000000;
				fib1 = fib1 / 10000000000;
				break;
			}
		}
	}

	for (i = i; i < 96; i++)
	{
		if (i % 2 == 0)
		{
			fib1 = fib1 + fib3;
			fib2 = fib2 + fib4;
		}
		else
		{
			fib3 = fib3 + fib1;
			fib4 = fib4 + fib2;
		}


		if (fib2 > 10000000000)
		{
			fib1 = fib1 + (fib2 / 10000000000);
		}
		else if (fib4 > 10000000000)
		{
			fib3 = fib3 + (fib4 / 10000000000);
		}

		if (i % 2 == 0)
		{
			printf("%lu%lu\n", fib1, fib2);
		}
		else
		{
			printf("%lu%lu\n", fib3, fib4);
		}
	}
	return (0);
}
