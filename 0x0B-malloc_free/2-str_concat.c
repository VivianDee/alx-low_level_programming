#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: String
 * @s2: String to be concated with string s1
 *
 * Return:
 * - Pointer to concated string in memory
 * - NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j, l, k = 0;

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + k) != '\0')
	{
		k++;
	}
	p = (char *)malloc((i + k) * sizeof(char));
	l = i;
	for (j = 0; j < i; j++)
	{

		*(p + j) = *(s1 + j);
		*(p + l) = *(s2 + j);
		l++;
	}
	k = k - j;
	for (j = 0; j < k; j++)
	{
		*(p + l) = *(s2 + i + j);
		l++;
	}
	*(p + l) = '\0';

	return (p);
}
