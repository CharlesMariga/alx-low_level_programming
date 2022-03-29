#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any sets of bytes
 * @s: string to be searched
 * @accept: bytes to search for
 *
 * Description: locates the first occurence in the strings
 * of any the bytes in the string accept and returns the
 * byte in s that matches one of the bytes in accept, or
 * NULL if no such buyte is found
 *
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
