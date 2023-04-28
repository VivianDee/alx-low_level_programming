#include <stdio.h>

/**
 * print_before_main - Prints out a syring before the main function is called
 *
 */


void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house");
	printf(" upon my back!\n");
}
