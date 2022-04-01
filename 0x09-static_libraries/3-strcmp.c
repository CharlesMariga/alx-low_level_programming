#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Description: compares string and returns their ascii difference
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
