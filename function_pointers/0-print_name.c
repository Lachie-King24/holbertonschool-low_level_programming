#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the name
 * @name: name to print
 * @f: pointer to function
 */


void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
	return;
f(name);
}
