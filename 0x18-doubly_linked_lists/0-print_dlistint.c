#include "lists.h"

/**
* print_dlistint - will print a doubly linked list
* @h: is just the pointer to the list
*
* Return: is just the number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
	return (0);

	while (h)
{
	printf("%d\n", h->n);
	h = h->next;
	nodes++;
}

	return (nodes);
}
