#include "main.h"

/**
 *times_table - A function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, k, result;

	for (k = 0; k <= 9; k++)
	{
		_putchar('0');
		if (k != 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (i = 1; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
