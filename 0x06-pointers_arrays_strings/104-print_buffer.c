#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * numDigit - Count the number of digit in n
 *
 * @n: The integer
 *
 * Return: The number of digit
 */

int numDigit(int n)
{
	if (n < 16)
		return (1);
	else if (n < 256)
		return (2);
	else if (n < 4096)
		return (3);
	else if (n < 65536)
		return (4);
	else if (n < 1048576)
		return (5);
	else if (n < 16777216)
		return (6);
	else if (n < 268435456)
		return (7);
	else
		return (8);
}

/**
 * print_buffer - Print a buffer
 *
 * @b: The buffer
 * @size: The size of the buffer
 */

void print_buffer(char *b, int size)
{
	int i, j, h;
	int hexa, nbZ;

	hexa = 0;

	for (i = 0; i <= size / 10; i++)
	{
		nbZ = numDigit(hexa);
		for (h = nbZ; h < 8; h++)
			printf("0");
		printf("%x: ", hexa);
		hexa += 10;

		for (j = 0; j < 10; j++)
		{
			if ((hexa + j) < (size + 10))
				printf("%02x", *b);
			else
				printf("  ");
			if ((j + 1) % 2 == 0)
				printf(" ");
			b++;
		}

		for (j = 0; j < 10; j++)
			b--;

		for (j = 0; j < 10; j++)
		{
			if ((hexa + j) < (size + 10))
			{
				if (isprint(*b))
					printf("%c", *b);
				else
					printf(".");
			}
			b++;
		}
		printf("\n");
	}
}
