#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char);
char *create_array(unsigned int size, char);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grind(int width, int height);
void free_grind(int **grind, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN */
