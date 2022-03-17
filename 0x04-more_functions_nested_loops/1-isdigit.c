#include "main.h"

/**
 * _isdigit - check for uppercase
 * @c: letter
 *
 * Description: Check whether c is a digit or not
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}

