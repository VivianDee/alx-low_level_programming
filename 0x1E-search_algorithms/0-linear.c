#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: An array
 * @size: The array size
 * @value: Searchg value
 *
 * Return: Value index in array (Success)
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	int count = (int) size;

	if (!array | !value)
		return (-1);
	for (i = 0; i < count; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
