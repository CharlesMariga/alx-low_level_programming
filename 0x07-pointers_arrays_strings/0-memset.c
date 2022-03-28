#include "main.h"

/**
 * _memset - fills the memory with a contant byte
 * @s: string to be filled
 * @b: character to fill s with
 * @n: number of bytes in c to be filled
 *
 * Description: fills numver of bytes n in string s with the character b
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
