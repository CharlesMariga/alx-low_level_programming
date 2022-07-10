#include "hash_tables.h"


/**
 * hash_table_set -  set a hashtable key and value
 *
 * @ht: hash table
 * @key: hash table key
 * @value: value of the new elements
 *
 * Description: adds an element to the hash table
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_node);
		return (0);
	}

	new_node->key = (char *)key;
	new_node->value = strdup(value);
	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];
	else
		new_node->next = NULL;

	ht->array[index] = new_node;

	return (1);
}
