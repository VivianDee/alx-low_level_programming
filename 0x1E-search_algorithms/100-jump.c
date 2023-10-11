#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump Search.
 * @array: Pointer to the sorted integer array.
 * @size: Size of the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the 'value' in the array or -1 if not found.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, prev_idx = 0, cur_idx = sqrt(size), m = sqrt(size);

	while (cur_idx < size)
	{
		cur_idx = i;
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev_idx, cur_idx);
			for (j = prev_idx; j <= cur_idx; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		else
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		prev_idx = i;
		i = i + m;

		if (i > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					prev_idx, cur_idx + m);
			for (j = prev_idx; j < size; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			}
			break;
		}
	}
	return (-1);
}
