#include "lists.h"

/**
 * sum_dlistint - sums of a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * Description: sums all the node of doubly linked list
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
