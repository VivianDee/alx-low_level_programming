#include "main.h"

/**
 * print_number - A function that prints a number
 * @n: A number
 *
 * Return: Void
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}
}
