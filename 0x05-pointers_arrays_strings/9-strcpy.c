#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src, including
 *the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: A String
 * @dest: Empty array
 *
 * Return: String src
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, i = 0, l = 0;

	while (*(src + i) != '\0')
	{
		count++;
		i++;
	}
	for (l = 0; l < count; l++)
	{
		*(dest + l) = *(src + l);
	}
	return (src);
}
