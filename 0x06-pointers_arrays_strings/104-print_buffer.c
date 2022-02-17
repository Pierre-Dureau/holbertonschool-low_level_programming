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
	int i, j, count;
	char *p = b;

	count = 0;
	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i <= size / 10; i++)
		{
			printf("%08x: ", count);
			for (j = 0; j < 10; j++)
			{
				if ((count + j) < size)
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
				if ((count + j) < size)
				{
					if (isprint(*b))
						printf("%c", *b);
					else
						printf(".");
				}
				b++;
			}
			count += 10;
			printf("\n");
		}
	}
	b = p;
}
