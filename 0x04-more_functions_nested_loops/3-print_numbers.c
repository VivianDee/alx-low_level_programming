#include "main.h"

/**
 * print_numbers - A function that prints the numbers, from 0 to 9,
 *followed by a new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 48;

	while (i >= 48 && i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
