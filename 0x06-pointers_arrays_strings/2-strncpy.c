#include "main.h"

/**
 * _strncpy - A function that copies two strings.
 * @src: A String
 * @dest: A String
 * @n: Number of bytes
 *
 * Return: Value of pointer 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, len2 = 0, i = 0, l = 0, m = 0, j = 0;

	while (*(src + i) != '\0')
	{
		len++;
		i++;
	}
	while (*(dest + l) != '\0')
	{
		len2++;
		l++;
	}
	while (*(src + m) != '\0' && j < n)
	{
		*(dest + j) = *(src + j);
		m++;
		j++;
	}
	if (len < n)
	{
		*(dest + m) = '\0';
	}

	return (dest);
}
