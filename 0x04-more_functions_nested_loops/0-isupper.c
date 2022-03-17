#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: letter
 *
 * Description: Check wheter is uppercase or not
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
