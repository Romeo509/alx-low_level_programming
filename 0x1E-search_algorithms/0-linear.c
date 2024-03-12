#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
printf("Found %d at index: %lu\n", value, i);
return (i);
}
}
printf("Value not present in array\n");
return (-1);
}
