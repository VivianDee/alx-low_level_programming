#include <stdio.h>

/**
 * main - A function that prints the numbers from 1 to 100, followed by
 *a new line. But for multiples of three it prints Fizz instead of the number
 *and for the multiples of five prints Buzz. For numbers which are multiples
 *of both three and five it prints FizzBuzz.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			putchar('F'), putchar('i'), putchar('z'), putchar('z');
			putchar('B'), putchar('u'), putchar('z'), putchar('z');
			putchar(' ');
		} else if (i % 3 == 0)
		{
			putchar('F'), putchar('i'), putchar('z'), putchar('z');
			putchar(' ');
		} else if (i % 5 == 0)
		{
			putchar('B'), putchar('u'), putchar('z'), putchar('z');
			putchar(' ');
		} else if (i < 10)
		{
			putchar(i + '0'), putchar(' ');
		} else
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
