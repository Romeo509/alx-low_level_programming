#include "function_pointers.h"

/**
*int_index - Searches for an integer in an array.
*@array: Pointer to the integer array.
*@size: Number of elements in the array.
*@cmp: Pointer to the function to compare values.
*
*Return: Index of the first element for which cmp does not return 0,
*         or -1 if no element matches or if size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}
