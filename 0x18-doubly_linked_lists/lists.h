#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
* struct dlistint_s - is the doubly linked list
* @n: is an integer
* @prev: will just point to the previous node
* @next: will just point to the next node
*
* Description: is the doubly linked list node structure
* 
*/
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
size_t print_dlistint_backward(const dlistint_t *h);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
