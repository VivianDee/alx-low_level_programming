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
	int c, j, k;

	for (c = 48; c < 58; c++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (j > c && k > j)
				{
					putchar(c);
					putchar(j);
					putchar(k);
					if (c != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
	}
