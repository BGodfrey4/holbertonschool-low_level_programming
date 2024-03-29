#include "hash_tables.h"

/**
* print_list - will print all elements of the linked list
* @h: is the pointer to the hash_node_t list printed
*/
void print_list(hash_node_t *h)
{
	while (h)
{
	printf("'%s': '%s'", h->key, h->value);
	if (h->next)
	printf(", ");
	h = h->next;
}
}

/**
* hash_table_print - prints a hash table
* @ht: hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	char *last_key = NULL;
	unsigned long int index;

	if (!ht)
	return;

	for (i = 0; i < ht->size; i++)
{
	if (ht->array[i] != NULL)
	node = ht->array[i];
}

	printf("{");

	if (node)
{
	last_key = node->key;
	index = key_index((const unsigned char *)last_key, ht->size);
	for (i = 0; i < ht->size; i++)
{
	print_list(ht->array[i]);
	if (ht->array[i] && i < index)
	printf(", ");
}
}

	printf("}\n");
}
