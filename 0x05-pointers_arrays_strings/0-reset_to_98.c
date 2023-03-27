#include "main.h"

/**
 * reset_to_98 - A function that takes a pointer to an int as parameter and 
 *updates the value it points to to 98.
 * @n: The number.
 *
 * Return: The value of var 'n'.
 */
void reset_to_98(int *n)
{
	int *p = n;
	*p =98;
}
