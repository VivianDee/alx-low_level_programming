#include "main.h"

/**
  * binary - A function that prints a binary number
  * @n: binary number
  * @check: Checks for recursion
  *
  */

void binary(unsigned long int n, int check)
{
	int binary_num = 0;

	if (n > 0)
	{
		check++;
		binary_num = n & 1;
		n = n >> 1;
		binary(n, check);
		_putchar(binary_num + '0');
	}
	else if (check == 0 && n == 0)
		_putchar(binary_num + '0');
}

/**
  * print_binary - A function that prints a binary number
  * @n: binary number
  *
  */

void print_binary(unsigned long int n)
{
	binary(n, 0);
}
