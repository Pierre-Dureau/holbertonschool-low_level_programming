#include "search_algos.h"

/**
 * search - Search the value with recursion
 *
 * @array: Array of Int
 * @size: Size of the array
 * @value: Value to search
 * @low: Left of the array to search
 * @high: Right of the array to search
 * Return: Index found or -1
 */

int search(int *array, size_t size, int value, size_t low, size_t high)
{
	size_t pos;

	if (low > high)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low]));

	if (pos > size - 1)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	if (array[pos] < value)
		return (search(array, size, value, pos + 1, high));
	return (search(array, size, value, low, pos - 1));
}

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
	if (!array || size == 0)
		return (-1);

	return (search(array, size, value, 0, size - 1));
}
