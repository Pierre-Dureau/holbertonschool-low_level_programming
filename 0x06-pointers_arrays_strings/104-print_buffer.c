#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Print a buffer
 *
 * @b: The buffer
 * @size: The size of the buffer
 */

void print_buffer(char *b, int size)
{
	int i, j;
	int hexa;

	hexa = 0;

	for (i = 0; i <= size / 10; i++)
	{
		printf("%08x: ", hexa);
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
