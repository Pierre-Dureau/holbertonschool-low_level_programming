#include "main.h"
#include <stdio.h>

/**
 * print_two_long - print the Fibonacci value with a 2 longs
 *
 * @i: compteur de la liste
 * @fib1: surplus du 1er long
 * @fib2: 1er long
 * @fib3: surplus du 2eme long
 * @fib4: 2eme long
 */

void print_two_long(int i,
					unsigned long fib1,
					unsigned long fib2,
					unsigned long fib3,
					unsigned long fib4)
{
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
			printf("%lu%lu", fib1, fib2);
		}
		else
		{
			printf("%lu%lu", fib3, fib4);
		}
		printf(", ");
	}
}

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
	printf("%lu, ", fib1);
	fib2 = 1;

	for (i = 0; i < 97; i++)
	{
		if (i % 2 == 0)
		{
			fib1 = fib1 + fib2;
			printf("%lu, ", fib1);
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
			printf("%lu, ", fib2);
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
	print_two_long(i, fib1, fib2, fib3, fib4);
	printf("\n");
	return (0);
}
