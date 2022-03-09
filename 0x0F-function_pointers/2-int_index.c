#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: Array of integer
 * @size: Size of the integer
 * @cmp: Function called
 *
 * Return: -1 if nothing found, 1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
