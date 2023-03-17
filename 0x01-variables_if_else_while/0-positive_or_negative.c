#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * @n is given a random value
 *
 * Description: An IF statement checks if the value of n is positive, negative
 * or zero and prints out n and a string.
 *
 * Return: Always 0 (Success) 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf ("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
