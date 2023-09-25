#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to a pointer to the head of the list
* @n: integer to add as data in the new node
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *current;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new_node;
return (new_node);
}

