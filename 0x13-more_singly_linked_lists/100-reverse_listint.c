#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a linked list
 * @head: head node of the linked list
 *
 * Description: Reverses a listint_t linked list having being
 * passed its head node
 *
 * Return: new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *what_to_point_to;

	if (!(*head))
		return (NULL);

	what_to_point_to = NULL;
	next_node = (*head)->next;
	(*head)->next = what_to_point_to;
	what_to_point_to = *head;

	while (next_node)
	{
		*head = next_node;
		next_node = (*head)->next;
		(*head)->next = what_to_point_to;
		what_to_point_to = *head;
	}

	return (*head);
}
