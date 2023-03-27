#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: A String
 *
 * Return: The value of var 'count'.
 */
int _strlen(char *s)
{
	int count = 0, i = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
