#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head of the list
 *
 * Description: frees a list_t list having being passed
 * its head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
