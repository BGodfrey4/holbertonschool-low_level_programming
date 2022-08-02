#include "lists.h"

/**
* add_dnodeint - will add a new node to the beginning of doubly linked list
* @head: is the double pointer to the list
* @n: is the data inserted in the new node
*
* Return: is the address of the new element or just NULL if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
	return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
	return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
	(*head)->prev = new;

	*head = new;

	return (new);
}
