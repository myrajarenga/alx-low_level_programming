#include <stdio.h>

/**
 * main -  main function
 *
 * Return: 0
 */
int main(void)
{
	unsigned int a;
	unsigned long n;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
		else
		{
			a++;
		}

	}
	printf("%lu\n", n);
	return (0);

}
