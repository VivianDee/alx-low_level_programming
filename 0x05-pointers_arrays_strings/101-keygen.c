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
	int i;
	char pass[13];
	char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(0));
	for (i = 0; i < 13; i++)
	{
		pass[i] = valid_chars[rand() % 62];
	}

	pass[13] = '\0';

	printf("%s\n", pass);

	return (0);
}
