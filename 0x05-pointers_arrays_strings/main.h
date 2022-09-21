#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to std
 * @c : parameter to compare
 * Return 1 or 0
 */
int _putchar(char c);

/**
 * reset_to_98 - reset variable to 98
 * @n: variable with pointer
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps integer value
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b);

/**
 * _strlen - length of string
 * @s: string
 *
 *Return: returns length
 */
int _strlen(char *s);

/**
 * _puts - prints something with new line
 * @str: string to put
 */

void _puts(char *str);

/**
 * print_rev - reverse a string
 * @str: string to reverse
 */

void print_rev(char *s);

/**
 * rev_string - reverse astring value
 * @s: string to print
 */
void rev_string(char *s);

/**
 * puts2 - puts Stringtwice
 *
 * @str: string to put twice
 */
void puts2(char *str);

/**
 * print_array - prints array
 * @a: array
 * @n: number of elements
 *
 */
void print_array(int *a, int n);

/**
 * puts_half - print second half of string
 * @st: string to put half
 */
void puts_half(char *str);

/**
 * _strcpy - main function
 * @dest: destination
 * @src: source
 * Return: retun value
 */
char *_strcpy(char *dest, char *src);

/**
 *_atoi - convert char to int
 * @s: string
 *
 * Return: returns avalue
 */
int _atoi(char *s);
#endif
