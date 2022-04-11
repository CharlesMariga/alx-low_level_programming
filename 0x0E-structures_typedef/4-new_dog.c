#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int length, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	arr = (char *) malloc(length * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: doggo's owner
 * Return: new_dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_dog_name, *new_dog_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog_name = _strdup(name);
	if (new_dog_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog_owner = _strdup(owner);
	if (new_dog_owner == NULL)
	{
		free(new_dog_name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = new_dog_name;
	new_dog->age = age;
	new_dog->owner = new_dog_owner;
	return (new_dog);
}
