#include "function_pointers.h"
#include <stddef.h>
/**
 *print_name - program that prints name
 *@name: name to print
 *@f: function which prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL  || f == NULL)
		return;
	f(name);
}
