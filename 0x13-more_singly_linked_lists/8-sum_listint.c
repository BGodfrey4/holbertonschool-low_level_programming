#include "lists.h"

/**
* sum_listint - will calculate the sum of all data in a listint_t list
* @head: is the first node in the linked list
*
* Return: is the resulting sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
{
	sum += temp->n;
	temp = temp->next;
}

	return (sum);
}
