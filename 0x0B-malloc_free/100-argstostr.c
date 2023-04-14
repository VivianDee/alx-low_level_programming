#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - A function that concatenates all the arguments of your program.
 * @ac: Length of the array
 * @av: array
 *
 * Return: concated array(success) or NULL
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int len = 0, i, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
	}

	p = (char *)malloc((ac + len - 2) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(p, av[i]);
		strcat(p, "\n");
	}
	return (p);
}
