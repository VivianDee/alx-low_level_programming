#include "main.h"

/**
  * get_bit - A function that returns the value of a bit at a
  *given index.
  * @n: A number
  * @index: bit index
  *
  * Return: (-1) (failure) or the bit value 'binary_num'
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int binary_num = 0;

	if (n)
	{
		binary_num = (n >> index) & 1;
		return (binary_num);
	}

	return (-1);
}
