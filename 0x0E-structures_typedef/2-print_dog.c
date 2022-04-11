#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints a dog structure
 * @d: dog
 *
 * Description: prints a struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (null)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == NULL)
			printf("Age: (null)\n";
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (null)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
