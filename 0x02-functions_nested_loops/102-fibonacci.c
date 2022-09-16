#include <stdio.h>

/**
 * main - print the first 50 fibanocci numbers starting with 1 and 2 followed by anew line
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%id, ", j);
		}
		else
		{
			print("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
