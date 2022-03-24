#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of source string to be concantenated
 *
 * Description: concatenates two strings, src and dest using
 * n bytes from the src string
 *
 * Return: string pointer of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int startIndex = 0, i = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	startIndex = i + 1;

	i = 0;
	while (src[i] && i <= n)
	{
		dest[startIndex + i] = src[i];
		i++;
	}
	
	return (dest);
}
