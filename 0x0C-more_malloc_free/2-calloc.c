#include <stdlib.h>
#include "main.h"

/**
*_calloc - Allocates memory for an array and initializes to zero.
*@nmemb: The number of elements in the array.
*@size: The size of each element in bytes.
*
*Return: A pointer to the allocated memory,
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size = nmemb * size;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
for (unsigned int i = 0; i < total_size; i++)
{
*((char *)ptr + i) = 0;
}
return (ptr);
}
