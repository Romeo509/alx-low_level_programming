#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers.
 * @list: Pointer to the head of the sorted list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
if (list == NULL || size == 0)
return (NULL);

size_t jump = (size_t)sqrt((double)size);
size_t index = 0, k = 0;

do {
k++;
index = k *jump;
while (list->next && list->index < index)
list = list->next;

if (list->next == NULL && index != list->index)
index = list->index;

printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

} while (index < size && list->next && list->n < value);

printf("Value found between indexes [%d] and [%d]\n",
(int)index - jump, (int)index);

return (list);
}

/**
 * linear_search - Searches for a value in a range of nodes.
 * @start: Pointer to the starting node of the range.
 * @end: Pointer to the ending node.
 * @value: The value to search for.
 *
 * Return: A pointer to the node where value is located,
 */
listint_t *linear_search(listint_t *start, listint_t *end, int value)
{
listint_t *current;

for (current = start;
current != end->next && current != NULL;
current = current->next)
{
printf("Value checked at index [%d] = [%d]\n", current->index, current->n);
if (current->n == value)
return (current);
}

return (NULL);
}
