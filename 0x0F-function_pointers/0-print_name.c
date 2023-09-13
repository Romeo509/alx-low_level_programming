#include "function_pointers.h"

/**
*print_name - Print a name using a given function
*@name: The name to print
*@f: A function to print the name
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
