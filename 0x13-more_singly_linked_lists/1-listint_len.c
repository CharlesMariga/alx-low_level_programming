#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: head of the linked list
 *
 * Description: returns the number of elements in a linked
 * listint_t list
 *
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
