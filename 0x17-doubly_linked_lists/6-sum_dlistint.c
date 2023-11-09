#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}

