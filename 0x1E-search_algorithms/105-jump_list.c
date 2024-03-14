#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted linked list
 *             using the Jump search algorithm.
 *
 * @list: Pointer to the head of the linked list to search.
 * @size: Number of nodes in the linked list.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where the value is located,
 *         or NULL if the value is not present or the list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump_index, jump_step, jump_size;
listint_t *prev;

if (list == NULL || size == 0)
return (NULL);

jump_size = (size_t)sqrt((double)size);
jump_index = 0;
jump_step = 0;

do {
prev = list;
jump_step++;
jump_index = jump_step *jump_size;

while (list->next && list->index < jump_index)
list = list->next;

if (list->next == NULL && jump_index != list->index)
jump_index = list->index;

printf("Value checked at index [%d] = [%d]\n", (int)jump_index, list->n);

} while (jump_index < size && list->next && list->n < value);

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

for (; prev && prev->index <= list->index; prev = prev->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
if (prev->n == value)
return (prev);
}

return (NULL);
}
