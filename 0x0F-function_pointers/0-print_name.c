#include <stdlib.h>
#include "function_pointers.h"

/**
*print_name - Print a name using a given function
*@name: The name to print
*@f: A function to print the name*
*Description:
*This function takes a name and a function pointer and uses the provided
*function to print the name. It ensures that the inputs are valid before
*performing the printing operation.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NUll)
return;
f(name);
}

