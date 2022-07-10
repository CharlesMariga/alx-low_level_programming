#include "hash_tables.h"

/**
 * free_list - frees a linked list from memory
 *
 * @head: head of the linked list
 *
 * Description: frees a linked list from heap memory
 *
 * Return: void
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
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 *
 * Description: frees up memory of a hash table
 *
 * Return: void
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
