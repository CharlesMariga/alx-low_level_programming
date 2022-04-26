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
	listint_t *current_node = *head, *temp;

	if (!current_node)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);

		return (1);
	}

	while (current_node->next && ((i + 1) != index))
	{
		current_node = current_node->next;
		i++;
	}

	if ((i + 1) == index && current_node->next)
	{
		temp = current_node->next;
		current_node->next = temp->next;
		free(temp);

		return (1);
	}

	return (-1);
}
