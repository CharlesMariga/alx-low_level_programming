#include "main.h"

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
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
