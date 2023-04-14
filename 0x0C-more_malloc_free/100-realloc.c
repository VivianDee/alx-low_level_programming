#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated
 * @old_size: Is the size, in bytes, of the allocated space for ptr
 * @new_size: Is the new size, in bytes of the new memory block
 *
 * Return:
 * - Pointer to reallocated memory
 * - (NULL) if malloc fails or new_size is 0  and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if ((new_size > old_size) || (new_size && old_size))
	{
		p = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		p = ptr;
		free(ptr);
		return (p);
	}
	return (NULL);
}
