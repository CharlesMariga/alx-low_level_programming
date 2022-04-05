#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - string concatenation
 * @s1: string one
 * @s2: string two
 *
 * Description: concatenates strings s1 and s2
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, total, k;
	char *string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		i++;

	while (*(s2 + j))
		j++;

	total = i + j + 1;

	string = malloc(sizeof(char) * total);

	if (string == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		string[k] = s1[k];

	for (; k < total; k++)
		string[k] = s2[k - i];

	string[k] = '\0';

	return (string);
}
