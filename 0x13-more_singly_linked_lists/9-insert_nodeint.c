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
	listint_t *new;
	listint_t *prev;
	listint_t *current;
	listint_t *temp;
	unsigned int index = 0;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
		if (index == 0)
			prev = NULL;
		else
			prev = current;
		current = temp;

		if (idx == index)
		{
			new->n = n;
			new->next = current;
			prev->next = new;
			return (new);
		}
		temp = temp->next;
		index++;
	}

	return (NULL);
}
