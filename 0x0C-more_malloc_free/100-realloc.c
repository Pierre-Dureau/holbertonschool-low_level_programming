#include "main.h"
#include <stdlib.h>

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
	if (old_size == 0)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (ptr);
	}
	if (old_size > new_size)
		free(ptr);

	ptr = malloc(new_size);
	return (ptr);
}
