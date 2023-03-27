#include "main.h"

/**
 * print_rev - A function that prints a string,
 *in reverse, followed by a new line.
 * @s: A String
 *
 * Return: void
 */
void print_rev(char *s)
{
	int j, count = 0, i = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
