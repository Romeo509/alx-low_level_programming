#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the beginning of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current = *head;
unsigned int count = 0;
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while (current)
{
if (count == idx - 1)
{
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
current = current->next;
count++;
}
free(new_node);
return (NULL);
}

