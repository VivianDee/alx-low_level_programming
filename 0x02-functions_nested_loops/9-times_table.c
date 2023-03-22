#include "main.h"

/**
 *times_table - A function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, result, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i < 10; i++)
		{
			result = i * j;
			if (i == 0 && result == 0)
			{
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i < 9)
			{
				_putchar((result < 10) ? ' ' : (result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i == 9)
			{
				_putchar((result < 10) ? ' ' : (result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
