#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * is_prime - Checks if a num is a prime num
 * @n: A number*
 *
 * Return: 0
 */

int is_prime(long int n)
{
	long int i;

	if (n < 2)
	{
		return (0);
	}

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
		return (0);
		}
	}
	return (1);
}

/**
 * main - A function that finds and prints the largest prime factor of the num
 *
 * Return: 1 (Success)
 */
int main(void)
{
	long int i, n = 612852475143;
	long int largest_factor = 1;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
			{
				largest_factor = i;
			}
			if (is_prime(n / i))
			{
				largest_factor = n / i;
			}
		}
	}
	printf("%ld\n", largest_factor);
	return (0);
}
