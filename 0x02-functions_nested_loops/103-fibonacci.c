#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - A function that prints the first Fibonacci numbers less than
 *4,000,000, starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long int i, sum = 0, temp1 = 0, temp2 = 1, result = 0;

	for (i = 0; i <= 50; i++)
	{
		sum = temp2 + temp1;
		temp2 = temp1;
		temp1 = sum;
		if (sum < 4000000 && sum % 2 == 0)
		{
			result += sum;
		}
	}
	printf("%ld", result);
	putchar('\n');
	return (0);
}
