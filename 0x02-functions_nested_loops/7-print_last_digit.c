#include "main.h"

/**
 *print_last_digit - A function that prints the last digit of a number.
 * @r: A number
 *
 * Return: count
 */

int print_last_digit(int r)
{
	int lastdig = 0, num = 0;

	if (r > 0)
	{
		lastdig = r % 10;
	} else if (r == 0)
	{
		lastdig = r;
	} else
	{
		while (r < 0)
		{
			r++;
			num++;
		}
		lastdig = num % 10;
	}
	return (_putchar(lastdig + '0'), lastdig);
}
