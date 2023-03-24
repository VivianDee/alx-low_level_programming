#include "main.h"

/**
 * print_number - A function that prints a number
 * @n: A number
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	} else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: A number
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else
	{
		for (i = n; i >= 98; i--)
		{
			print_number(i);
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
