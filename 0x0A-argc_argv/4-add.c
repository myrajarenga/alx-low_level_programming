#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that adds numbers
 * prints the result followed by anew line
 * @argc:number of argument passed to the function
 * @argv:argument vector of pointers to strings
 * Return: 0 if no error else 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for  (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
		if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

	}
	sum = atoi(argv[i]) + sum;

	printf("%d\n", sum);
	return (0);
}

