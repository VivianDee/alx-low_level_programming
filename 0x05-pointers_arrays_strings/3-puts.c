#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line, to stdout.
 * @str: A String
 *
 * Return: void
 */
void _puts(char *str)
{
	int j, count = 0, i = 0;

	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	for (j = 0; j < count; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
