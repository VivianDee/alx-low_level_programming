#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 *of a square matrix of integers.
 * @a: An Array
 * @size: Array size
 *
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}
	printf("%d", sum1);
	for (j = size - 1; j >= 0; j--)
	{
		sum2 += *(a + k * size + j);
		k++;
	}
	printf(", %d\n", sum2);
}
