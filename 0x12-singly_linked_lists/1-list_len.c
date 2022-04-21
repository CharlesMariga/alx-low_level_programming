#include <stddef.h>
#include "lists.h"

/**
 * list_len - number of elements in a list
 * @h: head of the list
 *
 * Description: retuns the number of elements in alist
 * when passed the head of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
