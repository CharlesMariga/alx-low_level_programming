#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a block of memory
 * @ptr: old memory
 * @old_size: bytes of the allocated space for ptr
 * @new_size: bytes of the new memory block
 *
 * Description: reallocates memory block using malloc and free
 *
 * Return: new allocated memory and NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
