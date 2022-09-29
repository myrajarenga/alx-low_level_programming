#include "main.h"
#include <string.h>
/**
* _strlen_recursion - calculate the lenth of a string
* @s: string to be used
* Return: void
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
