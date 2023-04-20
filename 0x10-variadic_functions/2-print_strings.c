#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints out a variable number of strings
 * @separator: String seperator
 * @n: Number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *s;

	if (n == 0)
		return;
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
