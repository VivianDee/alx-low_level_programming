#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - Searches for a value in a sorted
 *array of integers using the Interpolation search algorithm
 * @array: Pointer to the sorted integer array.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Return: Index of the found value or -1 if not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int pos = 0, low = 0, high = size - 1, len = (int) size;

	if (!array)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		if (pos < len)
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (pos > (len - 1))
		{
                	printf("Value checked array[%d] is out of range\n", pos);
			break;
		}
		else if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			low = pos + 1;
		else if (array[pos] < value)
			high = pos - 1;
	}
	return (-1);
}
