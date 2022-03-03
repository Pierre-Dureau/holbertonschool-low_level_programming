#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Return the length of a string
 * @s: The string
 * Return: The length of s
 */
/**
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
*/
/**
 * _memcpy - Copies memory data
 *
 * @dest: The buffer
 * @src: The memory data
 * @n: The sized of changed bytes
 *
 * Return: The buffer dest
 */
/**
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *t = dest;

	for (i = 0; i < n; i++, dest++)
	{
		*dest = src[i];
	}

	return (t);
}
*/
/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the previously allocated memory
 * @old_size: actual size of ptr
 * @new_size: new size of ptr
 *
 * Return: Pointer to the new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (old_size == 0)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (ptr);
	}

	ptr = malloc(new_size);
	return (ptr);
}
