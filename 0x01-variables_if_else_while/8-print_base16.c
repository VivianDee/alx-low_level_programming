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

	for (c = 48; c < 103; c++)
	{
		if (c >= 48 && c <= 57)
		{
			putchar(c);
		}
		else if (c >= 97 && c <= 102)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
