#include <stdio.h>

/**
 * mian - computes and prints the sum of all the multiples of 3or 5below 1024
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += 1;
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
