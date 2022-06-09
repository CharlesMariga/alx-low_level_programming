#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth index of doubly linked list
 *
 * @head: head of the doubly linked list
 * @index: index of the node to be returned
 *
 * Description: returns the node of a doubly linked list at index index
 *
 * Return: node at nth
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
