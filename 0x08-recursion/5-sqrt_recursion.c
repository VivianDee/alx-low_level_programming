#include "main.h"

/**
  * check - checks for squareroot of a number
  * @n: A number
  * @i: Possible square root
  *
  * Return: Squareroot of n.
  */
int check(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (n % (i * i) == 0 && i * i == n)
		return (i);
	return (check(n, i += 1));
}

/**
  * _sqrt_recursion - A function that returns the natural square
  *root of a number.
  * @n: A number
  *
  * Return: Squareroot of n.
  */
int _sqrt_recursion(int n)
{
	int i = 2;

	if (n <= 0)
		return (-1);

	if (n == 1)
		return (n);

	return (check(n, i));
}
