#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concantenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes for string s2
 *
 * Description: concatenates n bytes of s2 to strins s1
 *
 * Return: string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Length = 0, s2Length = 0, newArrLength = 0;
	unsigned int i = 0, j = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1Length))
		s1Length++;

	while (*(s2 + s2Length))
		s2Length++;

	if (n >= s2Length)
		newArrLength = s1Length + s2Length;
	else
	{
		newArrLength = s1Length + n;
		s2Length = n;
	}

	newArrLength++;

	string = malloc(sizeof(char) * newArrLength);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < s1Length; i++)
		string[i] = s1[i];

	for (j = 0; j < s2Length; j++)
		string[j + i] = s2[j];

	string[--newArrLength] = '\0';
	return (string);
}
