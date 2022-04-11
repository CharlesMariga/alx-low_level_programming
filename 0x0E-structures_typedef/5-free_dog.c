#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free's a dog
 * @d: dog
 *
 * Description: free's a dog struct from memory
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	char *name = d->name;
	char *owner = d->owner;

	free(name);
	free(owner);
	free(d);
}
