#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: A Pointer to a String 1
 * @needle: A Pointer to a String to be compared with string 1
 *
 * Return: Pointer p 
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, len2 = 0, characterNum = 0;
	char *p;

	while (*(needle + j) != '\0')
	{
		j++;
	}
	while (*(haystack + i) != '\0')
	{
		for (len2 = 0; len2 < j; len2++)
		{
			if (*(haystack + i) == *(needle + len2))
			{
				characterNum++;
			} 
			if (*(haystack + i) == ' ')
			{
				characterNum = 0;
			}
		}
		if (characterNum  == j)
		{
			p = (haystack + (i + 1 - characterNum));
			return (p);
		}
		i++;
	}
	return (0);
}
