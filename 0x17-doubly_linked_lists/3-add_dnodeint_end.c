#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 *
 * @head: head of the doubly linked list
 * @n: element of the new node
 *
 * Description: adds a new element at the end of a doubly linked list
 *
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
	} else
	{
		current_node = *head;
		while (current_node->next)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
		new_node->prev = current_node;
	}

	return (new_node);
}
