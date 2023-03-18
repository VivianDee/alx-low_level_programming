#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

/**
 * main - function starts here
 *
 * Description: write function send a string to the standard output
 *
 * Return: Return(0) stops the compiler
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
