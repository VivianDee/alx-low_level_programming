#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Returns the index of the first occurence of an integer in an
 *array
 * @array: A pointer to an array
 * @size: Length of the array
 * @cmp: Function to be called on each element of the array
 *
 * Return:
 * - Index 'i' (Success)
 * - -1 (Failure)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check = 0, *p;

	if (size <= 0)
		return (-1);

	p = &check;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (*p == 0)
				*p = cmp(array[i]);
			if (*p != 0)
			{
				return (i);
			}
		}

	}
	return (-1);
}
