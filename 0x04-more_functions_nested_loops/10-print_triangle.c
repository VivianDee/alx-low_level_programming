#include "main.h"

/**
 * print_triangle - A function that prints a triangle, followed by a new line.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		int space = n - i;
		int hash = i;

		while (space > 0 && hash >= 1)
		{
			_putchar(' ');
			space--;
		}
		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}
		_putchar('\n');
	}
}
