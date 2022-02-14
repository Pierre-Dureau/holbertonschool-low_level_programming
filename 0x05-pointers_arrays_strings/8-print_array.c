#include <stdio.h>


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
