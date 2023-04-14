#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - A  function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements in array
 * @size: size in bytes of each element
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * sizeof(size));
	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);

	return (p);
}
