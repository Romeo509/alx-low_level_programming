#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the dlistint_t list.
 * @n: The value to be assigned to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->prev = NULL;

/* Link the new node to the existing list */
if (*head != NULL)
{
new_node->next = *head;
(*head)->prev = new_node;
}
else
{
new_node->next = NULL;
}

/* Update the head to point to the new node */
*head = new_node;
return (new_node);
}
