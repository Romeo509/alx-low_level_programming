#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: Pointer to a pointer to the head of the dlistint_t list.
* @idx: The index of the list where the new node should be added.
* @n: The value to be assigned to the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int i = 0;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

temp = *h;
while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

if (temp == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}

