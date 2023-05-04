#include "main.h"

/**
 * binary_to_decimal - A function that converts a binary number to a decimal
 * @num: binary number
 * @len: length of the binary number
 *
 * Return: binary (success)
 */
unsigned int binary_to_decimal(unsigned int num, unsigned int len)
{
	unsigned int i = 0, binary = 0, j = 0;

	for (i = 0; i < len; i++)
	{
		j = num % 10;
		binary += j << i;
		num = num / 10;
	}

	return (binary);
}

/**
  * binary_to_uint - A function that converts a binary number to a decimal
  * @b: String of a binary number
  *
  * Return: 1 (success) or 0 (failure)
  */

unsigned int binary_to_uint(const char *b)
{
	int num = 0, len = 0;

	if (b == NULL)
		return (0);

	num = atoi(b);
	len = strlen(b);
	if (len > 1 && num > 1)
		return (binary_to_decimal(num, len));
	else if (len == 1 && num == 1)
		return (1);
	else
		return (0);
}
