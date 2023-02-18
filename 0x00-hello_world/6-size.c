#include <stdio.h>
/**
 * main - print the string in put function
 *
 * Description: using the main fuction
 * this program prints:"Pogramming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
    int i;
    float j;
    long int a;
    long long  int b;
    char k;

	printf("Size of a char: %d bytes(s)\n", (int) sizeof(k));
	printf("Size of an int: %d bytes(s)\n", (int) sizeof(i));
	printf("Size of a long int: %d bytes(s)\n", (int) sizeof(a));
	printf("Size of a long long int: %d bytes(s)\n", (int) sizeof(b));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(j));
	return (0);
}
