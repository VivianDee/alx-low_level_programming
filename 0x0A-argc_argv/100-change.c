#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int count = 0, x = atoi(argv[1]) * 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} else if (x > 0)
	{
		if (x / 25 > 0)
		{
			count += x / 25;
			x = x % 25;
		}
		if (x / 10 > 0)
		{
			count += x / 10;
			x = x % 10;
		}
		if (x / 5 > 0)
		{
			count += x / 5;
			x = x % 5;
		}
		if (x / 2)
		{
			count += x / 2;
			 x = x % 2;
		}
		if (x / 1 > 0)
		{
			count += x / 1;
			x = x % 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
