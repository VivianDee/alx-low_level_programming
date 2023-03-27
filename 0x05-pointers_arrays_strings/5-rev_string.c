#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: A String
 *
 * Return: void
 */
void rev_string(char *s)
{
	char rev[500];
	int j, count = 0, i = 0, k = 0, l = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	for (j = count - 1; j >= 0; j--)
	{
		if (k < count)
		{
			*(rev + k) = *(s + j);
		}
		k++;
	}
	for (l = 0; l < count; l++)
	{
		*(s + l) = *(rev + l);
	}
}
