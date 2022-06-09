#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: head of the doubly linked list to be freed
 *
 * Description: frees a doubly linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;
	if (current)
	{
		while (current->next)
		{
			next = current->next;
			free(current);
			current = next;
		}
		free(current);
	}
}
