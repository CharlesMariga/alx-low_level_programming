#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node to the end of a list
 * @head: head of the list
 * @str: string
 *
 * Description: adds a node to the end of a list_t list
 * when passed the head of the node and a string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (*(str + count) != '\0')
		count++;

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
		new->str = strdup(str);
		new->len = count;
		new->next = NULL;
	} else
	{
		new->str = strdup(str);
		new->len = count;
		new->next = NULL;
		*head = new;
	}

	return (new);
}
