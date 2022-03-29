#include "main.h"
#include <stddef.h>

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
	int i;

	while (*haystack)
	{
		i = 0;
		if (*haystack == needle[i])
		{
			while (needle[i])
			{
				if (*(haystack + i) != needle[i])
				{
					break;
				}
				i++;
			}

			if (needle[i] == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}

	return (NULL);
}
