#include <stdio.h>

/**
 * print_array - Print an array with pointer
 *
 * @a: The array
 * @n: The length of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		a++;
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
