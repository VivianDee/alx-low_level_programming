#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: An Array
 * @b: Replcement String
 * @n: Number of bytes to be replaced
 *
 * Return: The address of pointer 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
