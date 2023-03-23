#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line in the terminal,
 *followed by a new line.
 * @n: A number
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count = 0, space;

	if (n > 0)
	{
		while (n > 0)
		{
			count++;
			space = count;
			while (space > 1)
			{
				_putchar(' ');
				space--;
			}
			_putchar(92);
			_putchar('\n');
			n--;
		}
	} else if (n <= 0)
	{
		_putchar('\n');
	}
}
