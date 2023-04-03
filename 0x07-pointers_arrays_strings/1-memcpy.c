#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @src: String to be copied
 * @dest: Copied String
 * @n: Number of bytes to be copied
 *
 * Return: The address of pointer 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return(dest);
}
