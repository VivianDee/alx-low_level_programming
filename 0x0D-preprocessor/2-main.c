#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the name of the file it was compiled from,
 *followed by a new line.
 *
 * Return: EXIT_SUCCESS (0)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
