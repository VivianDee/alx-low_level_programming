#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argv: Argument vector
 * @argc: Length of argv
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int s;
	int is_division_by_zero = (*argv[2] == '/' && *argv[3] == '0');
	int is_modulo_by_zero = (*argv[2] == '%' && *argv[3] == '0');

	if (is_division_by_zero || is_modulo_by_zero)
	{
		printf("Error\n");
		exit(100);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	if (s == 0)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", s);
	return (0);
}
