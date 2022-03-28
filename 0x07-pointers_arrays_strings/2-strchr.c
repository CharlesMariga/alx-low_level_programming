#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Description: locates a character in a string and returns a pointer
 * to the first occurence of the character c
 *
 * Return: pointer of NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	if (c == '\0')
	{
		return (s + i);
	}

	return (NULL);
}

