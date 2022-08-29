#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: Array of Int
 * @size: Size of the array
 * @value: Value to search
 * Return: Index found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (!array || size == 0)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low]));

	if (pos > size)
		printf("Value checked array[%ld] is out of range\n", pos);

	for (; pos < size; pos++)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
	}

	return (-1);
}
