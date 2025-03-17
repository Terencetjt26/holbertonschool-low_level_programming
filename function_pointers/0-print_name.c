#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name using a function pointer
* @name: The name to print
* @f: A pointer to the function that will print the name
*
* Description: This function takes a name and applies a given function
* to it. The function `f` is expected to take a `char *` parameter and
* print the name in some way (e.g., normally or in uppercase).
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
