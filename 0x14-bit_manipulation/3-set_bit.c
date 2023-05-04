#include "main.h"

/**
  * set_bit - A function that sets the value of a bit to 1 at a
  *given index.
  * @n: A number
  * @index: bit index
  *
  * Return: (-1) (failure) or 1 (success)
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	int binary_num = 0;

	if (n)
	{
		binary_num = (*n >> index) & 1;
		if (binary_num == 0)
			*n = *n ^ (1 << index);
		return (1);
	}
	return (-1);
}
