#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endian, 0 if big
 */

int get_endianness(void)
{
	int i = 1;

	return (*((char *)&i));
}
