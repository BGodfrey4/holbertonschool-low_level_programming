#include "hash_tables.h"

/**
* free_list - wil free the linked list
* @head: hash_node_t is the list to be freed
*/
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
{
	temp = head->next;
	free(head->key);
	free(head->value);
	free(head);
	head = temp;
}
}

/**
* hash_table_delete - will delete a hash table
* @ht: is the hash table that is deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
	return;

	for (i = 0; i < ht->size; i++)
	free_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
