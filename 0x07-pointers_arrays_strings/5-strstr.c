#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be located in
 * @needle: string to locate
 *
 * Description: finds the first occurence of the substring
 * needle in the string haystack.
 *
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, start;
	int nlen = 0;

	i = 0;
	j = 0;
	start = 0;

	while (needle[nlen] != '\0')
	{
		nlen++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < nlen && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
			{
				start = i;
			}
			if (j == nlen - 1)
			{
				return (haystack + start);
			}
		}
	}
	return (0);
}
