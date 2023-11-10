#include "lists.h"

/**
* print_dlistint - Print all elements of dlistint_t list.
* @h: The head of dlistint_t list.
*
* Return: node_count.
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t node_count = 0;

while (h)
{
node_count++;
printf("%d\n", h->n);
h = h->next;
}

return (node_count);
}

