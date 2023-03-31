#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13.
 * @str: A String
 *
 * Return: Pointer 'str'
 */
char *rot13(char *str)
{
	int i = 0, c = 0;

	while (*(str + c) != '\0')
	{
		c++;
	}
	for (i = 0; i <= c; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = ((*(str + i) - 'a' + 13) % 26) + 'a';
		} else if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) = ((*(str + i) - 'A' + 13) % 26) + 'A';
		}
	}
	return (str);
}
