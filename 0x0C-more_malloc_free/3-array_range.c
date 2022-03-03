#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: Start of the array
 * @max: Finish of the array
 *
 * Return: The array
 */

int *array_range(int min, int max)
{
	int *a, *t;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);

	t = a;
	for (; min <= max; min++, a++)
		*a = min;

	return (t);
}
