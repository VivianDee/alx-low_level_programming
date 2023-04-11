#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars, and initializes
 *it with a specific char.
 * @size: The number of characters in the array
 * @c: The character used as the initial value in the array
 *
 * Return:
 * -Created array
 * -NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p = (char *)malloc(size * sizeof(char) + 1);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
