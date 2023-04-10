#include "main.h"

/**
 * wildcmp - A function that compares two strings and returns 1
 *if the strings can be considered identical, otherwise return 0.
 * @s1: A string to be compared with string s2
 * @s2: A string to be compared with string s1
 *
 * Return: 1 (Success)
 * - 1 if the strings are identical
 * - 0 if the string are not identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
