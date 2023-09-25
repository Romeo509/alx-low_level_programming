#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to a pointer to the beginning of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *temp;
unsigned int count = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}
while (count < index - 1)
{
if (current->next == NULL)
return (-1);
current = current->next;
count++;
}
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}

