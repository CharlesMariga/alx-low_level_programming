#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to a doubly linked list
 *
 * @head: pointer to the head of the node
 * @n: value for the new node
 *
 * Description: adds a new node to a doubly linked list
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

