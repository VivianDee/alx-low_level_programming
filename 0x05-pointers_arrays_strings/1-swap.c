#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: A number
 * @b: A number
 *
 * Return: The value of var 'n'.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a =  *b;
	*b = temp;
}
