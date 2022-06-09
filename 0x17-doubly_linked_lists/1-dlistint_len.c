#include "lists.h"

/**
 * dlistint_len - length of a doubly linked list
 *
 * @h: head of the doubly linked list
 *
 * Description: returns the length of a doubly linked list
 *
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
