#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar prints out numbers 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 48;

	while (c != 58)
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
