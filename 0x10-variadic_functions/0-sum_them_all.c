#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - A function that sums up a variable number of integers
 * @n: Number of integers
 * Return:
 * - sum
 * - 0 (failure)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list num;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
