#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create a array object
 *
 * @size: Size of the buffer
 * @c: The first char of the buffer
 *
 * Return: The buffer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size > 0)
	{
		buffer = malloc(size * sizeof(char));
		if (buffer == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
			buffer[i] = c;
	}
	else
	{
		return (NULL);
	}

	return (buffer);
}
