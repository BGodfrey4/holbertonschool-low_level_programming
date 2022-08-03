#include "lists.h"

/**
* sum_dlistint - will return total amount of data in doubly linked list
* @head: is the pointer to the list
*
* Return: is the sum of the data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
{
	sum += head->n;
	head = head->next;
}

	return (sum);
}
