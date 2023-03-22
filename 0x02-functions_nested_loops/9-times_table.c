#include "main.h"

/**
 *times_table - A function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, result, j = 0;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i < 10; i++)
		{
			result = i * j;

			if (i > 8)
			{
				if (result == 9)
				{
					_putchar(' ');
					_putchar(result + '0');
				} else if (result < 10 && j < 10)
				{
					_putchar(result + '0');
				} else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
