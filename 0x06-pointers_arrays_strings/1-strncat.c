#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @src: A String
 * @dest: A String
 * @n: Number of bytes
 *
 * Return: Value of pointer 'dest'
 */
char *_strncat(char *dest, char *src, int n)
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
		*(dest + len2) = *(src + j);
		m++;
		j++;
		len2++;
	}

	len2 = len2 + len + 1;
	*(dest + len2) = '\0';

	return (dest);
}
