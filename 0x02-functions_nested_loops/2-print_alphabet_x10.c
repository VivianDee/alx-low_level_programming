#include "main.h"

/**
 * print_alphabet_x10 - Prints out alphabets a-z 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
