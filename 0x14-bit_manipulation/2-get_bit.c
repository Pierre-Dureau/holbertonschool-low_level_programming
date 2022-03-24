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
	unsigned int i;

	for (i = 0; i < index; i++)
		n >>= 1;

	if (n & 1)
		return (1);
	else
		return (0);
}
