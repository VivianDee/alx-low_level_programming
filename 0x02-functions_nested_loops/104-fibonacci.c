#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - A function that prints the first 98 Fibonacci numbers, starting
 *with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long i, sum = 0, temp1 = 0, temp2 = 1;

	printf("1, ");
	for (i = 0; i <= 98; i++)
	{
		sum = temp2 + temp1;
		temp2 = temp1;
		temp1 = sum;
		if (sum > 1 && i != 98)
		{
			printf("%lu, ", sum);
		} else if (i == 98)
		{
			printf("%lu", sum);
		}
	}
	putchar('\n');
	return (0);
}
