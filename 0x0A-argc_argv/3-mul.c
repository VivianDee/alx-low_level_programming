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
	int multiply = 0;

	if (argc >= 2)
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	} else
	{
		printf("Error\n");
	}

	return (0);
}
