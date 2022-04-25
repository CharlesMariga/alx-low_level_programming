#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list from memory
 * @head: head node of the linked list
 *
 * Description: frees a listint_t linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (*head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
