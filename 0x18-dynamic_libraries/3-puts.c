#include "main.h"

/**
 * _puts - prints strings
 * @str: pointer to strings
 *
 * Description: prints a string having being passed a pointer
 *
 * Return: void
 */
void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter) != 0)
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
