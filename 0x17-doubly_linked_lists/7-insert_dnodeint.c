#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node
 *
 * @h: head of the doubly linked list
 * @idx: index to be inseted
 * @n: value of the new node
 *
 * Description: inserts a new node at index idx
 *
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;
	dlistint_t *prev_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	prev_node = NULL;
	current_node = *h;
	while (current_node)
	{
		if (i == idx)
		{
			new_node->next = current_node;
			current_node->prev = new_node;
			if (prev_node)
			{
				prev_node->next = new_node;
				new_node->prev = prev_node;
			} else
				new_node->prev = NULL;
			return (new_node);
		}
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}

	return (NULL);
}
