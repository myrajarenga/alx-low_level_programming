#include <stdio.h>
#include <unistd.h>

/**
* main entry point
* Description: "print alphabet in lowercase
* Return: 0
*/
int main(void)
{
          char a;
	  
          for (a = 'a' ; a <= 'z'; a++)
           {    	
                if  (a == 'q' || a == 'e')

                 {
			 continue;
	         }
	         putchar(a);
           }
 
           putchar ('\n');
 
  
         return (0);
  
}

