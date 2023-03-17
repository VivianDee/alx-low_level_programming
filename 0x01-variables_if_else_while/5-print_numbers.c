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

	c = 0;

	while (c != 10)
	{
		printf("%d", c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
