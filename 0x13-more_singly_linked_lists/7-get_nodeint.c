#include "lists.h"

/**
* get_nodeint_at_index - returns the node at the index in a linked list
* @head: is just the first node in the linked list
* @index: is just the index of the node to return
*
* Return: is the pointer to the node that is looked for or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
{
	temp = temp->next;
	i++;
}

	return (temp ? temp : NULL);
}
