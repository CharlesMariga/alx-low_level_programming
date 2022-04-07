#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: number of elements
 * @size: number of bytes for each element
 *
 * Description: allocates memory for an array
 *
 * Return: void array pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	s = ptr;
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (ptr);
}
