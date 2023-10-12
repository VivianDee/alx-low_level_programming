#include <stdio.h>
#include <stdlib.h>

/**
 * Interpolation Search - Searches for a value in a sorted
 *array of integers using the Interpolation search algorithm
 * @param array Pointer to the sorted integer array.
 * @param size Size of the array.
 * @param value The value to search for.
 * @return Index of the found value or -1 if not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int pos = 0, low = 0, high = size - 1, len = (int) size;

	if (!array || !value)
		return (-1);

	while (pos < (len - 1))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < len)
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		else if (pos > (len - 1))
			printf("Value checked array[%d] is out of range\n", pos);

		if (array[pos] == value)
			return array[pos];
		else if (array[pos] > value)
			low = pos + 1;
		else if (array[pos] < value)
			high = pos -1;
	}
	return (-1);
}
