#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
