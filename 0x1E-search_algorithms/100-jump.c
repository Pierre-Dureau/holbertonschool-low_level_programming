#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: Array of Int
 * @size: Size of the array
 * @value: Value to search
 * Return: Index found or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i, j;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);

	for (j = i - jump; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (value == array[j])
			return (array[j]);
	}

	return (-1);
}
