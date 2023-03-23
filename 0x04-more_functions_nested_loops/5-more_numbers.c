#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14,
 *followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, count = 1;

	while (count <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}

	_putchar('\n');
	count++;

	}
}
