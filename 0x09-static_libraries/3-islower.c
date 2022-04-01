#include "main.h"

/**
 * _islower - checks lowercase
 * @c: letter to be checked
 *
 * Description: Check whether a letters is lowercase or not
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
