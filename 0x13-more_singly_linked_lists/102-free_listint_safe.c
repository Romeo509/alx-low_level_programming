#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tortoise, *hare, *tmp;
size_t count;
if (h == NULL || *h == NULL)
return (0);
tortoise = *h;
hare = *h;
count = 0;
while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
{
tortoise = *h;
while (tortoise != hare)
{
tmp = tortoise;
tortoise = tortoise->next;
hare = hare->next;
free(tmp);
count++;
}
tmp = tortoise;
tortoise = tortoise->next;
free(tmp);
count++;
}
}
while (*h)
{
tmp = *h;
*h = (*h)->next;
free(tmp);
count++;
}
*h = NULL;
return (count);
}

