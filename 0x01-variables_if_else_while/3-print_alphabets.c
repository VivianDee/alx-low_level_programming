#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar prints out alphabets a-z and A-Z
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 97;

	while (c != 123)
	{
		putchar(c);
		c = c + 1;
	}
	c = 65;

	while (c != 91)
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
