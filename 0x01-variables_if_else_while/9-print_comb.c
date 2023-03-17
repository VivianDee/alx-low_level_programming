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

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c < 57)
		{
			putchar(44);
			putchar(32);
		}	
	}
	putchar('\n');
	return (0);
}
