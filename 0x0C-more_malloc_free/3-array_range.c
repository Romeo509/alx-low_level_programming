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
int *result;
int index = 0;
int current = min;
if (min > max)
return (NULL);
result = malloc((max - min + 1) * sizeof(int));
if (!result)
return (NULL);
while (index <= max - min)
result[index++] = current++;
return (result);
}
