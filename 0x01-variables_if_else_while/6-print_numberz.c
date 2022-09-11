#include <stdio.h>

/**
*
* main - entry point
* Description: "prints all single digit numbers of base 10 starting from 0, followed by a new line
* Return: alway returns 0
*
*      
*/
int main(void)

{
	int a = 0;
	for (; a < 10 ; a++)

		putchar('0' + a);
	
	putchar('\n');
	return (0);

}
