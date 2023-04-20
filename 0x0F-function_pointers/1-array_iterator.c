#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter on
 *each element of an array.
 * @array: Pointer to an array
 * @size: Length of the array
 * @action: Pointer to a function that will be called on each character
 *within the array
 *
 * Return: Void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
