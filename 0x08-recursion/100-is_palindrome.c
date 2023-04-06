#include "main.h"

/**
  * check - A function that checks for palindromes.
  * @start: Begining of String
  * @end: End of String
  * @len: Length of the string
  *
  * Return: 1 (Success)
  */
int check(char *start, char *end, int len)
{
	if (len == 0 || len == 1)
		return (1);

	if (*start != *end)
		return (0);

	return (check(start + 1, end - 1, len - 2));

}

/**
  * length - A function that checks for length of string.
  * @s: A String
  *
  * Return: String length
  */
int length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + length(s + 1));
}

/**
  * is_palindrome - A function returns 1 if a string is
  *a palindrome and 0 if not.
  * @s: A String
  *
  * Return: 1 (Success)
  */
int is_palindrome(char *s)
{
	int len = length(s);

	if (len == 0 || len == 1)
		return (1);
	return (check(s + 0, s + len - 1, len));
}
