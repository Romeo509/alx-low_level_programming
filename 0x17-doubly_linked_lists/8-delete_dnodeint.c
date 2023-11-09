#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node .
 * @head: Pointer to a pointer to the head of the dlistint_t list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

while (current != NULL && i < index)
{
current = current->next;
i++;
}

if (current == NULL)
return (-1);

temp = current->prev;
temp->next = current->next;

if (current->next != NULL)
current->next->prev = temp;

free(current);

return (1);
}

