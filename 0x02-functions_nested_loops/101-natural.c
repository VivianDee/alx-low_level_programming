#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - A function that computes and prints the sum of all the multiples of
 *3 or 5 below 1024 (excluded), followed by a new line.
 * 
 * Return: 0
 */

int main(void)
{
	int i, num = 1024, sum = 0;

	for (i = 1; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
