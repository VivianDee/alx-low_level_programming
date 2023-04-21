#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_number - Prints out a number
* @n: A number
*/
void print_number(int n)
{
	if (n)
		printf("%d", n);
}

/**
* print_string - Prints out a string
* @s: A String
*/
void print_string(char *s)
{
	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}

/**
* print_char - Prints out a character
* @c: Ascii value
*/
void print_char(int c)
{
	if (c)
		putchar(c);
}

/**
* print_float - Prints out a float
* @n: A float
*/
void print_float(double n)
{
	if (n)
		printf("%f", n);
}

/**
* print_all - A function that prints integers, characters, strings or floats
* @format: data format soecifiers
*/
void print_all(const char *const format, ...)
{
	int i = 0, n = 0, check = 0;
	va_list string;

	if (format == NULL)
	{
		return;
	}
	n = strlen(format);
	va_start(string, format);
	while (i < n)
	{
		check = i;
		if (format[i] == 'c')
		{
			print_char(va_arg(string, int));
			check++;
		} else if (format[i] == 's')
		{
			print_string(va_arg(string, char *));
			check++;
		} else if (format[i] == 'f')
		{
			print_float(va_arg(string, double));
			check++;
		} else if (format[i] == 'i')
		{
			print_number(va_arg(string, int));
			check++;
		}
		while ((check - 1 == i) && (check - 1) < (n - 1))
		{
			printf(", ");
			check++;
		}
		i++;
	}
	printf("\n");
	va_end(string);
}
