#include <stdio.h>

/**
 * main - function starts here
 *
 * Description: printf function send a string to the standard output
 *
 * Return: Return(0) stops the compiler
 */
int main(void)
{
	printf("Size of a char: %ln byte(s)", sizeof(char));
	printf("Size of a int: %ln byte(s)", sizeof(int));
	printf("Size of a long int: %ln byte(s)", sizeof(long int));
	printf("Size of a long long int: %ln byte(s)", sizeof(long long int));
	printf("Size of a float: %ln byte(s)", sizeof(float));
	return (0);
}
