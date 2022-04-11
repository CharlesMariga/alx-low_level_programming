#include "dog.h"
#include <stdlib.h>

/**
 * get_string_length - gets the length of a string
 * @string: string
 *
 * Description: gets the length of  a string
 *
 * Return: int
 */
int get_string_length(char *string)
{
	int i = 0;

	while (*(string + i))
	{
		i++;
	}

	return (i);
}

/**
 * copy_string - copy's a string
 * @src: source
 * @dest: destination
 * @length: length of the string
 *
 * Description: copy's a string to a passed pointer
 *
 * Return: void
 */
void copy_string(char *src, char *dest, int length)
{
	int i = 0;

	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: creates a new instance of a dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *brand_new_dog;
	char *new_name;
	char *new_owner;
	int dog_name_length = 0, dog_owner_length = 0;

	brand_new_dog = malloc(sizeof(dog_t));
	if (brand_new_dog == NULL)
	{
		free(brand_new_dog);
		return (NULL);
	}

	dog_name_length = get_string_length(name);
	dog_name_length = get_string_length(owner);

	new_name = malloc(sizeof(char) * dog_name_length);
	if (new_name == NULL)
	{
		free(new_name);
		free(brand_new_dog);
		return (NULL);
	}
	copy_string(name, new_name, dog_name_length);

	new_owner = malloc(sizeof(char) * dog_name_length);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(brand_new_dog);
		return (NULL);
	}
	copy_string(owner, new_owner, dog_owner_length);

	brand_new_dog->name = new_name;
	brand_new_dog->age = age;
	brand_new_dog->owner = owner;

	return (brand_new_dog);
}
