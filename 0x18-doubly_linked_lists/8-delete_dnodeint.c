#include "lists.h"

/**
* dlistint_len - will return number of nodes in doubly linked list
* @h: is the pointer to the list
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

/**
* delete_dnodeint_at_index - will delete a node in doubly linked list
* at given index
* @head: is the double pointer to list
* @index: is the index of the node deleted
*
* Return: 1 is success -1 means failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(temp) < index + 1)
	return (-1);

	if (!index)
{
	(*head) = temp->next;
	if (temp->next)
	temp->next->prev = NULL;
	temp->next = NULL;
	free(temp);
	return (1);
}

	while (i < index)
{
	temp = temp->next;
	i++;
}

	temp->prev->next = temp->next;
	if (temp->next)
	temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
