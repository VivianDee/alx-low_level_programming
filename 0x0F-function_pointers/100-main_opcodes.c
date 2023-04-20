#include <stdio.h>
#include <stdlib.h>

/**
  * main - check the code
  * @argv: Argument vector
  * @argc: Length of argv
  *
  * Return: Always 0.
  */

int main(int argc, char *argv[])
{
	int i, num_bytes;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	p = (unsigned char *) main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(p + i));
	}
	printf("\n");
	return (0);
}
