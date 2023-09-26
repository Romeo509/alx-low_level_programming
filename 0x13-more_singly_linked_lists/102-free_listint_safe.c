#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: A pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
size_t count = 0;
while (current != NULL)
{
count++;
if (current < current->next)
{
*h = NULL;
break;
}
*h = current->next;
free(current);
current = *h;
}
return (count);
}

