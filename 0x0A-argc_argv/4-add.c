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
	int count = 0, sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (argc >= 2 && atoi(argv[i]))
		{
			sum += atoi(argv[i]);
			count++;
		} else if (argc < 2)
		{
			printf("0\n");
		}
	}
	if (count + 1 < argc)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);

	return (0);
}
