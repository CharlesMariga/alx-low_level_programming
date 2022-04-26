#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in a linked list
 * @head: head node of the linked list
 * @idx: index to insert the new node
 * @n: integer value of the new node
 *
 * Description: inserts a new node with integer value n at position idx of the
 * linked list
 *
 * Return: pointer of the new inserted node, or NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *prev, *new;
	unsigned int index = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	prev = NULL;
	current = *head;

	while (current != NULL && index <= idx)
	{
		prev = current;
		current = current->next;
	}

	new->n = n;
	if (*head == NULL && idx == 0)
	{
		new->next = NULL;
		return (new);
	} else if (idx == index)
	{
		prev->next = new;
		new->next = current;
		return (new);
	}

	return (NULL);
}
