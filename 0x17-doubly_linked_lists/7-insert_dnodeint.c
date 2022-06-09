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
	unsigned int i = 0;
	dlistint_t *current;
	dlistint_t *prev;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	prev = NULL;
	current = *h;
	while (current)
	{
		if (idx == i)
			break;
		prev = current;
		current = current->next;
		i++;
	}

	if (prev && !current)
		return (add_dnodeint_end(h, n));
	else if (prev && current)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->prev = prev;
		new_node->next = current;
		current->prev = new_node;
		prev->next = new_node;
		return (new_node);
	}

	return (NULL);
}
