#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 *
 * Return: (Success) or 0 (Failure)
 */

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
