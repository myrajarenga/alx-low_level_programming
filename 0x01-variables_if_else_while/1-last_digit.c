#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the last digit of the number stored in the variable n
* Description: checks on the last digit assigned on the var
* Return: 0
*/
int main(void)
{
int n;
int m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;

	if (m > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
	else if (m < 6 && m != 0)
{
	printf("Lat digit of %d is %d and is less than 6 and not 0\n", n, m);
}
	else
{
	printf("Lat digit of %d is %d and is 0\n", n, m);

}
	return (0);
}

