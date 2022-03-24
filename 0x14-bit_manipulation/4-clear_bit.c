#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: The number
 * @index: The index
 * Return: 1 if success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (!n || index > 63)
		return (-1);

	i <<= index;
	i = ~i;
	*n = *n & i;

	return (1);
}
