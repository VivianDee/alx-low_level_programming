#include "main.h"

/**
 * print_times_table - A function that prints the n times table,
 *starting with 0.
 * @n: A number
 *
 * Return:
 */

void print_times_table(int n)
{
int digits[3], num_digits, product, i, j, k;

if (n < 0 || n > 15)
{
	return;
}
for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		product = i * j;
		if (j != 0)
		{
			_putchar(',');
			_putchar(' ');
			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
			} else if (product < 100)
			{
				_putchar(' ');
			}
		}
		if (product == 0)
		{
			_putchar('0');
		} else
		{
			num_digits = 0;
			while (product > 0)
			{
				digits[num_digits++] = product % 10;
				product /= 10;
			}

			for (k = num_digits - 1; k >= 0; k--)
			{
				_putchar(digits[k] + '0');
			}
		}
	}
	_putchar('\n');
}
}
