#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: Minimun unteger value
 * @max: Maximum integer value
 *
 * Return:
 * - Pointer to allocated memory
 * - (NULL) if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int *p;
	int i = min, get_len = 1, j, k = 0;

	if (min > max)
		return (NULL);

	while (i <= max)
	{
		i++;
		get_len++;
	}
	p = (int *)malloc(get_len * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (j = min; j <= max; j++)
	{
		p[k] = min + k;
		k++;
	}

	return (p);
}
