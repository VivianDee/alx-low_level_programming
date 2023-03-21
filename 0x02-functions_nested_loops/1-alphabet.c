#include "main.h"

/**
 * print_alphabet - Prints out alphabets a-z
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int c;

	c = 97;

	while (c != 123)
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
