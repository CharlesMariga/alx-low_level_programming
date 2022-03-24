#include "main.h"

/**
 * _strncpy - copy's a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be copied to dest
 *
 * Description: copy's n bytes of src to dest
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
