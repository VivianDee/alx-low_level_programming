#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal,
 *followed by a new line.
 *
 * Return: void
 */
void print_line(int n);
{
	while (n >= 0)
	{
		if (n != 0)
		{
		_putchar(95);
		}
		n--;
	}
	_putchar('\n');
}
