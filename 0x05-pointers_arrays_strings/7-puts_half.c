#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line.
 * @str: A String
 *
 * Return: void
 */
void puts_half(char *str)
{
	long int j, count = 0, i = 0, half = 0;

	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}

	if (count % 2 == 0)
	{
		half = count / 2;
	} else if (count % 2 != 0)
	{
		half = (count - 1) / 2;
	}

	for (j = half; j < count; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
