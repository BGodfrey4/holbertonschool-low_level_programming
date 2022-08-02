#include "lists.h"

/**
* dlistint_len - will return the number of nodes in the doubly linked list
* @h: is just the pointer to the list
*
* Return: is just the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
	return (0);

	while (h)
{
	nodes++;
	h = h->next;
}

	return (nodes);
}
