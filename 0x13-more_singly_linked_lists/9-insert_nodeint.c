#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in a linked list
 * @head: head node of the linked list
 * @idx: index to insert the new node
 * @n: integer value of the new node
 *
 * Description: inserts a new node with integer value n at position idx of the
 * linked list
 *
 * Return: pointer of the new inserted node, or NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index;

	current = *head; /*place first node at current*/

	new_node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || new_node == NULL)
		return (NULL);

	new_node->n = n; /* add our element to the new node*/

	/*iterate list to node position idx - 2*/
	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 0) /*if the index for new node is 0*/
	{
		/*first node will be moved to second node*/
		new_node->next = *head;
		/*new node will be placed as the first node*/
		*head = new_node;
	}
	else if (current->next) /*if index where to add our new node is not 0*/
	{
		new_node->next = current->next; /*place current node after new node*/
		current->next = new_node;/*set the new node at index idx*/
	}
	else /*if node position is not present in the list*/
	{
		new_node->next = NULL;/*set next addr as NULL, indicates last node*/
		current->next = new_node;/*set the new node at the last position in list*/
	}

	return (new_node);
}
