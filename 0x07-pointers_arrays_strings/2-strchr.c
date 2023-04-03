#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * @s: A Pointer to a String
 * @c: A character the String 
 *
 * Return: The address of pointer 'p' (Success) or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			p = (s + i);
			return (p);
		}
		i++;
	}
	return(0);
}

