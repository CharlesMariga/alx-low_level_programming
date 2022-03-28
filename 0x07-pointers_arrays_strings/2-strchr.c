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
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}

