#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: bytes of memory to allocate
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	exit(98);

	return (p);
}
