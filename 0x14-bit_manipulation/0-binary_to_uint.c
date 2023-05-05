#include "main.h"

/**
  * binary_to_uint - A function that converts a binary number to a decimal
  * @b: String of a binary number
  *
  * Return: 1 (success) or 0 (failure)
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, len = 0, j = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			decimal += (b[i] - '0') << j;
		}
		else
			return (0);

		j++;
	}

	return (decimal);
}
