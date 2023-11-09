#ifndef LISTS_H
#define LISTS_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Structure */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Prototypes */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/* Add more function prototypes as needed */

#endif /* LISTS_H */

