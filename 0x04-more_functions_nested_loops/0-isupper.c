#include "main.h"

/**
 * _isupper - A function that checks for uppercase characters.
 * @c: Lowercase or uppercase alphabeth.
 *
 * Return: 1 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
