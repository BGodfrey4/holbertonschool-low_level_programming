#include "lists.h"

/**
* print_list - will print all the elements of a list_t list.
* @h: will link list to print
* Return: is just the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	int num = 0;
	const list_t *temp = h;

	while (temp)
{
	if (!(temp->str))
	printf("[0] (nil)\n");
	else
	printf("[%d] %s\n", temp->len, temp->str);

	num++;
	temp = temp->next;


	return (num);
}
