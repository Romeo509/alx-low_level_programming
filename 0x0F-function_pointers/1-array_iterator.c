#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator - Executes a function given as a parameter
*                 on each element of an array.
*@array: Pointer to the integer array.
*@size: Size of the array.
*@action: Pointer to the function to execute on each element.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array == NULL || action == NULL)
{
return;
}
while (i < size)
{
action(array[i]);
i++;
}
}
