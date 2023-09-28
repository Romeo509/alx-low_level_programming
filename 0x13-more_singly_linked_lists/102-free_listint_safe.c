#include "lists.h"

/**
* free_listint_safe - frees a linked list
* @h: pointer to the first node in the linked list
*
* Return: number of elements in the freed list
*/
size_t free_listint_safe(listint_t **h)
{
size_t start = 0;
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
start++;
}
else
{
free(current);
*h = NULL;
start++;
break;
}
}
*h = NULL;
return (start);
}

