#include "function_pointers.h"

/**
* print_name - will print the name (either uppercase or lowercase)
* @name: will string address.
* @f: is just the function address.
**/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
