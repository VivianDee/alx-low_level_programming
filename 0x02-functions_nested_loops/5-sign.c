#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 * @n: A number
 *
 * Return: 0, 1 or -1 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	_putchar(45);
	return (-1);
}
