#include "main.h"

/**
 * string_toupper - tranforms a string to uppercase
 * @a: string to be tranformed to uppercase
 * 
 * Description: changes all lowercase letters of a string to uppercase
 *
 * Return: char pointer to the tranformed string
 */
char *string_toupper(char *a)
{
	int i = 0;

	while(a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = 64 + (a[i] - 96);
		}
		i++;
	}
	a[i] = '\0';

	return (a);
}
