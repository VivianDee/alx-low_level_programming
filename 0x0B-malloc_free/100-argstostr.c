#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program.
 * @ac: Length of the array
 * @av: array
 *
 * Return: concated array(success) or NULL
 */

char *argstostr(int ac, char **av)
{

	int total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	char *str = malloc(sizeof(char) * total_len);
	if (str == NULL)
	{
		return NULL;
	}
	int pos = 0;
	for (int i = 0; i < ac; i++)
	{
		int len = strlen(av[i]);
		strncpy(str + pos, av[i], len);
		pos += len;
		str[pos++] = '\n';
	}

	str[pos] = '\0';
	return str;
}
