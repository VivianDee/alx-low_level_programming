#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 *in memory, which contains a copy of the string given as a parameter.
 * @str: The string to be copied
 *
 * Return: Pointer 'p'
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, j;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i == 0)
		return (NULL);

	p = (char *)malloc(i * sizeof(char));

	for (j = 0; j < i; j++)
	{

		*(p + j) = *(str + j);
	}

	return (p);
}
