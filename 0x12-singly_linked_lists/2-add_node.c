#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - adds a node to the head of a list
 * @head: head of the list
 * @str: string
 *
 * Description: adds a new node at the beginning of a
 * list_t list
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (*(str + count))
	{
		count++;
	}

	new->str = strdup(str);
	new->len = count;
	new->next = *head;
	*head = new;

	return (new);
}
