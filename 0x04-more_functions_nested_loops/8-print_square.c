#include "main.h"

/**
 *  print_square - A function that prints a square, followed by a new line.
 *
 * Return: void
 */

void print_square(int size)
{
	int line = size, i;

	if (size > 0)
	{
		while (line > 0)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			line--;
		}
	} else if (size <= 0)
	{
		_putchar('\n');
	}

}
