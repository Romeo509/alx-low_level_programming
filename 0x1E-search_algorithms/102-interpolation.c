#include "search_algos.h"

/**
 * interpolation_search - Searches for a specified value in a sorted integer
 *                         array using the interpolation search algorithm.
 * @array: A pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, or -1 if the value is not present.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (!array || size == 0)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (mid < size)
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
