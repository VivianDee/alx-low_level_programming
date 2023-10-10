#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_array - Prints an integer array.
* @array: The integer array to be printed.
* @size: The number of elements in the array.
*
* Return: None.
*/
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);

		if (i < (size - 1))
			printf(", ");
		else
			printf("\n");
	}
}

/**
* binary_search - Searches for a value in an array of
* integers using the Binary search algorithm
* @array: An array
* @size: The array size
* @value: Search value
*
* Return: Value index in array (Success)
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, mid = 0, high = 0;
	int len = (int) size;

	if (!array)
		return (-1);

	high = len - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		print_array(array + low, high - low + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
