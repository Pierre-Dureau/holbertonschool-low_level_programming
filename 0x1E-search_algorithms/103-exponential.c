#include "search_algos.h"

/**
 * print_array - Print the array to search
 *
 * @array: array to print
 * @n: number of Int to print
 */

void print_array(int *array, size_t n)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < n; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[i]);
}

/**
 * search - Search the value with recursion
 *
 * @array: Array of Int
 * @size: Size of the array
 * @value: Value to search
 * @left: Left of the array to search
 * @right: Right of the array to search
 * Return: Index found or -1
 */

int search(int *array, size_t size, int value, size_t left, size_t right)
{
	size_t middle = (right + left) / 2;

	print_array(array + left, right - left);

	if (array[middle] == value)
		return (middle);
	if (left == right)
		return (-1);

	if (value < array[middle])
		return (search(array, size, value, left, middle - 1));
	else
		return (search(array, size, value, middle + 1, right));
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: Array of Int
 * @size: Size if the array
 * @value: Value to search
 * Return: Index found or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, check = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 1; i < size; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value <= array[i])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i);
			check = 1;
			break;
		}
	}

	if (check == 1)
		return (search(array, size, value, i / 2, i));

	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, size - 1);
	return (search(array, size, value, i / 2, size - 1));
}
