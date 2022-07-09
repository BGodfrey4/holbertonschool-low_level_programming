#include "lists.h"
#include <stdio.h>

/**
* add_node - will put in a new node in the beginning of a list_t list
* @head: is just the pointer to the head of the linked list
* @str: is the data that will be placed in new node
* Return: is just the pointer to list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (!newNode)
{
	free(newNode);
	return (NULL);
}

	newNode->next = *head;
	*head = newNode;
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = newNode->next;

	return (*head);
}
