#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: A pointer to the head of the linked list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
const listint_t *loop_node = NULL;
while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
if (current >= loop_node)
{
if (loop_node == NULL)
loop_node = current;
else
{
printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
break;
}
}
current = current->next;
return (count);

