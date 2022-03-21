#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Description: resturn the size of a string by passings its pointer
 *
 * Return: int
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != 0)
	{
		counter++;
	}

	return (sizeof(*s) * 16);
}
