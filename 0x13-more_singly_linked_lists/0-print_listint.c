#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: head node of the list
 *
 * Description: prints all elements of a listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
