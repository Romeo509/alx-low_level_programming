#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - Executes a function on each element of an array.
* @array: Pointer to the integer array.
* @size: Size of the array.
* @action: Pointer to the function to execute on each element.
*
* Description: This function iterates through each element of an integer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
{
return;
}
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}

