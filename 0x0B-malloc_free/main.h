#ifndef main_h

#define main_h

/**
 * main.h - contains the prototypes of all functions in this directory,
 *including the prototype of the function _putchar
 *
 */
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
