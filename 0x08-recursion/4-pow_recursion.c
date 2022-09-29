#include "main.h"

/**
* _pow_recursion - return the value of x rasides to the power of 5.* @x: number to be used
* @y: exponent to be used
*
* Return: x * y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
