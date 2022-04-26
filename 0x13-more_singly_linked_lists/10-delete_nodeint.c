#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node
 * @head: head node
 * @index: index of the node to be deleted
 *
 * Description: Deletes a node from a listint_t linked list
 * at index index
 *
 * Return: 1 if success and -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev;
	listint_t *current;

	prev = NULL;
	current = *head;
	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
			
		i++;
		current = current->next;
	}

	if (i == index)
	{
		prev->next = NULL;
		free(current);
		return (1);
	}
	
	return (-1);
}	
