#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - A function that frees allocated memory for structure dog.
 * @d: Pointer to the structure "dog"
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
