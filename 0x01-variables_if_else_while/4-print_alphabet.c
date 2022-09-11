#include <stdio.h>
#include <unistd.h>
/**
 * main -entry point
 * Description: print lowercase alphabets
 * Return: always 0 (success)
 */
int main(void)
{ 
char ch;
for (ch = 'a'; ch <= 'z'; ch++)

{
if (ch != 'e' && ch != 'q')
{
	   putchar(ch);
}
               
}
putchar('\n');
return (0);
}	
