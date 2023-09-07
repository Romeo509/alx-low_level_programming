#include <stdlib.h>
#include "main.h"

/**
*array_range - Creates an array of integers from min to max.
*@min: The minimum value (inclusive).
*@max: The maximum value (inclusive).
*
*Return: A pointer to the newly created array,
*/
int *array_range(int min, int max)
{
if (min > max)
return (NULL);
int *arr;
int size = max - min + 1;
arr = (int *)malloc(size * sizeof(int));
if (arr == NULL)
return (NULL);
for (int i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
