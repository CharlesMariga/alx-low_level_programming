#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to be copied from src to dest
 *
 * Destination: copies n bytes of source memory to dest memory
 *
 * Return: dest memory pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
