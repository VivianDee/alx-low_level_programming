#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 *starting with the first character, followed by a new line.
 * @str: A String
 *
 * Return: void
 */
void puts2(char *str)
{
	int j, count = 0, i = 0;

	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	for (j = 0; j < count; j++)
		if (j % 2 == 0)
		{
			{
				_putchar(*(str + j));
			}
		}
	_putchar('\n');
}
