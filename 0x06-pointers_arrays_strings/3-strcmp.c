#include "main.h"
/**
* _strcmp - A function that compares two strings.
* @s1: A String
* @s2: A String
*
* Return: Variable 'count'
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, s1_Ascii = 0, s2_Ascii = 0, count = 0;

	while (*(s1 + i) != '\0')
	{
		s1_Ascii += *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		s2_Ascii += *(s2 + j);
		j++;
	}
	for (k = 0; k < i; k++)
	{
		if ((s1_Ascii > s2_Ascii) & (*(s1 + i) != *(s2 + i)))
		{
			count = 15;
		} else if ((s1_Ascii < s2_Ascii) & (*(s1 + i) != *(s2 + i)))
		{
			count = -15;
		} else
		{
			count = 0;
		}
	}
	return (count);
}
