#include "lists.h"

/**
* list_len - will return the number of the elements in a linked list
* @h: is the linked list to find length of
* Return: is just the number of elements in the list
*/
size_t list_len(const list_t *h)
{
	int num = 0;
	const list_t *temp = h;

	while (temp)
{
	num++;
	temp = temp->next;


	return (num);
}
