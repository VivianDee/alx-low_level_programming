#include "main.h"

/**
  * is_prime_check - A function that checks for prime numbers.
  * @n: A number
  * @num: Divisor
  *
  * Return: 1 (Success)
  */
int is_prime_check(int n, int num)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	if (n % num == 0)
		return (0);
	if (num * num > n)
		return (1);

	return (is_prime_check(n, num + 1));
}


/**
  * is_prime_number - A function that that returns 1 if the input
  *integer is a prime number, otherwise return 0.
  * @n: A number
  *
  * Return: 1 (Success)
  */
int is_prime_number(int n)
{
	return (is_prime_check(n, 2));
}
