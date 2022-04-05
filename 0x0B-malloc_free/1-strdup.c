#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a copy of a string
 * @str: string
 *
 * Description: creates a copy of a string using
 * using malloc and returns its pointer
 *
 * Return: character pointer
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *string;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;

	i++;
	string = malloc(sizeof(char) * i);

	if (string == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		string[j] = str[j];

	string[j] = '\0';

	return (string);
}
