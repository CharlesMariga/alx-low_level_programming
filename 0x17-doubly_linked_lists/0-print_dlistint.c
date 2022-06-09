#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements in a doubly linked list
 *
 * @h: head of the list to be printed
 *
 * Description: prints all the elements in doubly linke list i
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
