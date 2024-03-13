#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
int prev = 0, step = 0, len = (int)size;

if (!array || size <= 0)
return (-1);

while (step < len && prev < len)
{
if (array[step] >= value)
break;

printf("Value checked array[%d] = [%d]\n", step, array[step]);
prev = step;
step += (int)sqrt(len);
}

printf("Value found between indexes [%d] and [%d]\n", prev, step);

while (prev < len && prev <= step)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);

prev++;
}

return (-1);
}
