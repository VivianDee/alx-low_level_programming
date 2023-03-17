#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar prints out alphabets z-a
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 122;

	while (c != 96)
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
