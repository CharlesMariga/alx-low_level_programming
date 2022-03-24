#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes words in a string
 * @a: strin to be capitalized
 *
 * Description: capitalizes words in a string
 *
 * Return: character pointer of the capitalized string
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
				if (!(a[i - 1] >= 65 && a[i - 1] <= 122))
				{
					if (a[i] < 91 && a[i] > 122)
					{
						a[i] = 64 + (a[i] - 96);
					}
				}
		}
		i++;
	}
	a[i] = '\0';

	return (a);
}
