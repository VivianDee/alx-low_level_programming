#include "main.h"
/**
* string_toupper - A function that changes all lowercase letters of a string
*to uppercase.
* @s: A String
*
* Return: Variable 's'
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) > 97) && (*(s + i) < 122))
		{
			*(s + i) -= 32;
		}
		i++;
	}
	return (s);
}
