#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Description: reverses a string by passing a pointer s of characters
 *
 * Return: void
 */
void rev_string(char *s)
{
	int counter = 0, i;
	char temp;

	while (*(s + counter) != 0)
	{
		counter++;
	}


	i = 0;
	while (i < counter / 2)
	{
		temp = s[i];
		s[i] = s[counter - i - 1];
		s[counter - i - 1] = temp;
		i++;
	}
}
