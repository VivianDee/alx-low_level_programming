#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main() 
{
	int pass;

	srand(time(0));
	pass = rand();

	return (pass);
}
