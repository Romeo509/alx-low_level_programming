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
size_t len = 0;
listint_t *current, *temp;
if (!h || !*h)
return (0);
while (*h)
{
current = *h;
temp = current->next;
if (current - temp >= 0)
{
free(current);
*h = temp;
len++;
}
else
{
free(current);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}
