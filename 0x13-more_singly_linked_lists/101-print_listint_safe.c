#include "lists.h"

/**
*print_listint_safe - Prints a listint_t linked list safely.
*@head: Pointer to the head of the list.
*
*Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t count;
if (head == NULL)
exit(98);
tortoise = head;
hare = head;
count = 0;
while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
count++;
if (tortoise == hare)
{
printf("-> [%p] %d\n", (void *)tortoise->next, tortoise->next->n);
break;
}
}
return (count);
}

