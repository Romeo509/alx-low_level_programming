#include <stdlib.h>
#include "main.h"

/**
*create_array - Creates an array of charactersr.
*@size: The number of elements in the array.
*@c: The character to initialize the array elements with.
*
*Return: 0.
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i = 0;
if (size == 0)
{
return (0);
}
array = (char *)malloc(size * sizeof(char));
if (array == 0)
{
return (0);
}
while (i < size)
{
array[i] = c;
i++;
}
return (array);
}

