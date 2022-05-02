#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number character pointer
 *
 * Description: converts a binary number passed as a string
 * into an unsigned integer
 *
 * Return: unsigned int, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && (int)*(b + i) != '1')
			return (0);

		num <<= 1;
		if (b[i] == '1')
			num += 1;

		i++;
	}


	return (num);
}
