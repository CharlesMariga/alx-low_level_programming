#include "main.h"

/**
 * _isalpha - checks is alpha
 * @c: letter to be checked
 *
 * Description: Check whether a character is an alphanumeric
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
