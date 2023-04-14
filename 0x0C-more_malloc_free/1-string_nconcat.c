#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: String 1
 * @s2: String to be concated with string 1
 * @n: Number of bytes to concate from s2
 *
 * Return: Pointer to concated string
 * - (NULL) if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j, len1 = 0, len2 = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (*(s1 + len1) != '\0')
		len1++;

	while (*(s2 + len2) != '\0')
		len2++;

	if (n > len2)
		n = len2;

	p = (char *)malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (j = i; j < (i + n); j++)
	{
		p[j] = s2[k];
		k++;
	}

	*(p + j) = '\0';
	return (p);
}
