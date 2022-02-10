#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_gauche, fib1_droite, fib2_gauche, fib2_droite;
	unsigned long gauche, droite;

	for (i = 0; i < 92; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_gauche = fib1 / 10000000000;
	fib2_gauche = fib2 / 10000000000;
	fib1_droite = fib1 % 10000000000;
	fib2_droite = fib2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		gauche = fib1_gauche + fib2_gauche;
		droite = fib1_droite + fib2_droite;
		if (fib1_droite + fib2_droite > 9999999999)
		{
			gauche = gauche + 1;
			droite = droite % 10000000000;
		}

		printf("%lu%lu", gauche, droite);
		if (i != 98)
			printf(", ");

		fib1_gauche = fib2_gauche;
		fib1_droite = fib2_droite;
		fib2_gauche = gauche;
		fib2_droite = droite;
	}
	printf("\n");
	return (0);
}
