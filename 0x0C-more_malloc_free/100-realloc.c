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
	void *newPtr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		return (newPtr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);

	return (newPtr);
}
