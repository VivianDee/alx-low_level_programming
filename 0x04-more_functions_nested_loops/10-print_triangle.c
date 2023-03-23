#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			int space = size - i;
			int hash = i;

			while (space > 0 && hash >= 1)
			{
				_putchar(' ');
				space--;
			}
			if (hash > 0)
			{
				while (hash > 0)
				{
					_putchar('#');
					hash--;
				}
				_putchar('\n');
			}
		}
	} else if (size <= 0)
	{
		_putchar('\n');
	}
}
