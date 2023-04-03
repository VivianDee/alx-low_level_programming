#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: A Pointer to a String
 * @accept: A Pointer to a String to be compared with string 1
 *
 * Return: The index of the character that  can't be found in string 2
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, len1, len2, check = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (*(accept + j) != '\0')
	{
		j++;
	}
	for (len1 = 0; len1 < i; len1++)
	{ 
		if (check == 0)
		{
			check = 1;
			for (len2 = 0; len2 < j; len2++)
			{
				if (*(s + len1) == *(accept + len2))
				{
					check = 0;
				}
			}
		} else if (check == 1)
		{
			return (len1 - 1);
		}
	}
	return(0);
}
