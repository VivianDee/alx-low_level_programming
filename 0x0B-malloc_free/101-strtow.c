#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - A function that splits a string into words.
 * @str: Srting to be split
 *
 * Return: str (Success) NULL (failure)
 */
char **strtow(char *str)
{
	unsigned long int i = 0, len = 0, word = 0, j = 0;
	char **p;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			len++;
		if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
			word++;
	}
	p = (char **)malloc((word + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	p[word] = NULL;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			if (i == 0 || str[i - 1] == ' ')
			{
				p[j] = (char *)malloc((len + 1) * sizeof(char));
				if (p[j] == NULL)
				{
					while (j--)
						free(p[j]);
					free(p);
					return (NULL);
				}
				len = 0;
				p[j][len] = str[i];
				j++;
			} else
			{
				p[j - 1][len] = str[i];
			}
			len++;
		}
	}
	p[j] = NULL;
	return (p);
}
