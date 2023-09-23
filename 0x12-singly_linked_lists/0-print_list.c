#include <stdio.h>
#include "lists.h"

/**
*print_list - prints all the element of a list_t
*@h: pointers to the head of the list
*Return: nodes
*/
size_t print_list(const list_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
node_count++;
}
return (node_count);
}
