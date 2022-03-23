#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Description: appends the src string to the dest string
 *
 * Return: pointer the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int startIndex = 0, i = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	startIndex = i + 1;

	i = 0;
	while (src[i] != 0)
	{
		dest[startIndex + i] = src[i];
		i++;
	}
	src[i] = '\0';

	return (dest);
}
