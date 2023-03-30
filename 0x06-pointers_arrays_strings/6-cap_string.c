#include "main.h"
/**
* cap_string - A function that capitalizes the first letter of each word
*in a string
* @s: A String
*
* Return: Variable 's'
*/
char *cap_string(char *s)
{
	int i = 0, j = 10;

	while (*(s + i) != '\0')
	{
		if (*(s + (i + 1)) > 'a')
		{
			switch (*(s + i))
			{
				case ' ':
				case '.':
				case ',':
				case '?':
				case '!':
				case '\n':
				case ';':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case '\t':
					*(s + (i - j + 1)) -= 32;
					j = 0;
					break;
			}
		}
		i++;
		j++;
	}
	return (s);
}
