#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints out a variable number of integers
 * @separator: Integer seperator
 * @n: Number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	if (n == 0)
		return;
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
