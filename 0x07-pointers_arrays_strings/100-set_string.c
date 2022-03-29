#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer of type char
 * @to: string to be set to
 *
 * Description: sets the value of a pointer to a char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
