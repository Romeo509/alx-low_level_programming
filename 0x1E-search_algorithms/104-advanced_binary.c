#include "search_algos.h"

/**
 * print_array - Prints an array or subarray.
 * @array: Pointer to the first element of the array.
 * @start: Starting index of the array (or subarray).
 * @end: Ending index of the array (or subarray).
 */
void print_array(int *array, size_t start, size_t end)
{
size_t i;
printf("Searching in array: %d", array[start]);
for (i = start + 1; i <= end; i++)
printf(", %d", array[i]);
printf("\n");
}

/**
 * recursive_advanced_binary - Recursive binary search
 * for a value in a sorted array.
 * @array: Pointer to the starting element of the array.
 * @start: Starting index of the array.
 * @end: Ending index of the array.
 * @value: Value to be searched.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int recursive_advanced_binary(int *array, size_t start, size_t end, int value)
{
size_t mid;

if (end < start)
return (-1);

mid = start + (end - start) / 2;

print_array(array, start, end);

if (array[mid] == value && (mid == start || array[mid - 1] != value))
return (mid);
if (array[mid] >= value)
return (recursive_advanced_binary(array, start, mid, value));
return (recursive_advanced_binary(array, mid + 1, end, value));
}

/**
 * advanced_binary - Initiates a recursive binary
 * search on a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to be searched.
 *
 * Return: Index of the value if found, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (recursive_advanced_binary(array, 0, size - 1, value));
}
