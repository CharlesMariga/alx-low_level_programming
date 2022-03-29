#include "main.h"

/**
 * compare - compares two string
 * @X: first string
 * @Y: second string
 *
 * Description: compares two string and checks if they
 * are the same.
 *
 * Return: int
 */
int compare(char *X, char *Y)
{
	while (*X && *Y)
	{
	if (*X != *Y)
	{
		return (0);
	}

		X++;
		Y++;
	}

	return (*Y == '\0');
}

/**
 * _strstr - locates a substring
 * @haystack: string to be located in
 * @needle: string to locate
 *
 * Description: finds the first occurrence of the substring
 * needle in the string haystack.
 *
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}

	return (0);
}
