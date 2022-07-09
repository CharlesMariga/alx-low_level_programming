#include "hash_tables.h"

/*
 * hash_table_set - set a hashtable
 * @ht: hash table
 * @key: key of the hash table
 * @value: value of the new elements
 *
 * Description: adds an element to the hash table
 *
 * Return: returns 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	if (ht->array[index])
		new_node->next = ht->array[index];
	else
		new_node->next = NULL;

	ht->array[index] = new_node;
	return (1);
}
