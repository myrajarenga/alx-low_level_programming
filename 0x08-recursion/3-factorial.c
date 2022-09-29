#include "main.h"

/**
* factorial - claculate factorial of given number
* @n: number to be used
*
* Return: the factorial of a given number
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n *  factorial(n - 1));
}
