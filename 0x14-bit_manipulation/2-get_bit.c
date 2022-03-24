#include "main.h"

/**
 * get_bit - get the bit of a number at a specific index
 *
 * @n: The number
 * @index: The index
 * Return: 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;

	return (n & 1);
}
