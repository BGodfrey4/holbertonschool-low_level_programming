#include "hash_tables.h"

/**
* hash_table_get - will retrieve the value associated with the key
* @ht: is the hash table looked into
* @key: is just the key of the value retrieved
*
* Return: represents the value associated with a element
* and or NULL if key isnt found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
{
	if (!strcmp(node->key, (char *)key))
	return (node->value);
	node = node->next;
}

	return (NULL);
}
