#ifndef LISTS_H
#define LISTS_H

/**
*struct list_s - The singly linked list
*@str: string
*@len: length of the string.
*@next: node navigation
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);
#endif
