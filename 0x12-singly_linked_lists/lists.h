#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
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
size_t list_len(const list_t *h);
#endif
