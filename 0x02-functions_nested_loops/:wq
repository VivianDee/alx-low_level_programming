#include "main.h"

/**
 *times_table - A function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i < 10; i++)
		{
			if (i * j < 10 && i != 9)
			{
				_putchar(i * j + '0');
				_putchar(44);
				_putchar(32);
				_putchar(32);

			} else if (i * j < 10 && i < 10)
			{
				_putchar(i * j + '0');
			} else if (i * j >= 10 && i < 9)
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
				_putchar(44);
				_putchar(32);
				_putchar(32);
			} else
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
		}
		_putchar('\n');
		j = j + 1;
	}
}
