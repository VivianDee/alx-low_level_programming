#ifdef main_h

#undef main_h

#endif

#ifndef main_h

#define main_h

/**
 * main.h - contains the prototypes of all functions in this repository,
 *including the prototype of the function _putchar
 *
 */
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

#endif

#ifndef _putchar
#define _putchar\
int _putchar(char c)\
{\
	return (write(1, &c, 1));\
}

#endif
