#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: head of the list
 *
 * Description - prints all the elements of a linked list
 * having been passed the head of the list
 *
 * Return: (int) number of elements
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		} else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}

	return (count);
}

