#include "search_algos.h"

/**
 * print_array - Prints an array of integers.
 * @array: Pointer to the first element of the array.
 * @left: The starting index to print.
 * @right: The ending index to print.
 */
void print_array(int *array, size_t left, size_t right)
{
size_t i;
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
if (i < right)
printf("%d, ", array[i]);
else
printf("%d\n", array[i]);
}
}

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, left, right;

if (array == NULL)
return (-1);
for (left = 0, right = size - 1; right >= left;)
{
print_array(array, left, right);
i = left + (right - left) / 2;
if (array[i] == value)
return (i);
if (array[i] > value)
right = i - 1;
else
left = i + 1;
}
return (-1);
}
