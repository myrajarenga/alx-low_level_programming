#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - perform operations
 * @argc: number of arguments to pass
 * @argv: array of pointers to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
