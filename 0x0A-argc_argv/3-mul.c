#include <stdio.h>
#include <stdlib.h>
/**
* main -  a program that multiplies two numbers.
* @argc:argument that counts argument input
* @argv:argument that stores astring in an array of char * (strings)
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
		printf("Error\n");

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}

