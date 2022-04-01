#include "main.h"

/**
 * _strcpy - creates a copy of a string
 * @src: source of the string
 * @dest: destination of the string
 *
 * Description: create of copy of src and copy's it to dest
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
