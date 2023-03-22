#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;
	if (n <= 98) {
		for (i = n; i <= 98; i++) {
			if(i < 0)
			{
				_putchar('-');
				i = i * -1;
				_putchar(i + '0');
			}
			if(i < 10 && i >= 0)
			{
				_putchar(i + '0');
			}
			if (i > 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i != 98) {
				_putchar(',');
				_putchar(' ');
			}
		}
	} else {
		for (i = n; i >= 98; i--) {
			if(i >= 100)
			{
				_putchar(i / 100 + '0');
				_putchar((i / 10) % 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i != 98) {
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
