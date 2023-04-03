#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: A Pointer to a String
 * @accept: A Pointer to a String to be compared with string 1
 *
 * Return: 'p' points to the address of the character matched in 's'
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0, len1, len2;
	char *p;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (*(accept + j) != '\0')
	{
		j++;
	}
	for (len1 = 0; len1 < i; len1++)
	{
		for (len2 = 0; len2 < j; len2++)
		{
			if (*(s + len1) == *(accept + len2))
			{
				p = (s + len1);
				return (p);
			}
		}
	}
	return (0);
}
