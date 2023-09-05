#include <stdlib.h>
#include "main.h"

/**
*create_array - Creates an array of characters.
*@size: The number of elements in the array.
*@c: The character to initialize the array elements with.
*
*Return: A pointer to the created array or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
char *array;
if (size == 0)
{
return (0);
}
array = (char *)malloc(size * sizeof(char));
if (array == 0)
{
return (0);
}
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
