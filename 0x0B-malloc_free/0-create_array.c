#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates and array of characters
 * @size: size of the array
 * @c: character to initialize the array
 *
 * Description: initializes an array with a specific char
 *
 * Return: character pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	if (size == 0)
		return (NULL);

	string = malloc(sizeof(char) * size);

	if (string == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}
	string[size] = '\0';

	return (string);
}
