#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Entry point
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: 0 (success)
  */

int main(int argc, char *argv[])
{
	int multiply;

	if (argc == 3)
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	} else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
