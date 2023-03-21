#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer.
 * @r: A number
 *
 * Return: count
 */

int _abs(int r)
{
	int count = 0;

	if (r < 0)
	{
		while (r < 0)
		{
			r = r + 1;
			count = count + 1;
		}
	}
	while (r > 0)
	{
		r = r - 1;
		count = count + 1;
	}

	return (count);
}
