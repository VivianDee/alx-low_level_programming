#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar prints out alphabets a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 113 && c != 101)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
