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
	int c, j;

	for (c = 48; c < 58; c++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j > c)
			{
				putchar(c);
				putchar(j);
				if (c != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
	}
