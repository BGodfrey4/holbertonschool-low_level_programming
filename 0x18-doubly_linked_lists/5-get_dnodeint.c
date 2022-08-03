#include "lists.h"

/**
* get_dnodeint_at_index - will get the n'th node of doubly linked list
* @head: is the pointer to the list
* @index: is the index of the node returning
*
* Return: is the address of the node or if it doesn't exist its NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	return (NULL);

	while (head && i < index)
{
	head = head->next;
	i++;
}

	return (head ? head : NULL);
}
