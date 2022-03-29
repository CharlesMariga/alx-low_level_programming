#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes to be checked in the string
 *
 * Description: gets the length of a prefix substring and returns the number of
 * bytes in the initial segment of s with consists only of bytes from accept
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	unsigned int prev = 0;
	int i, j;

	i = 0;
	j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		prev = count;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}
		if (prev == count)
		{
			break;
		}
		i++;
	}

	return (count);
}
