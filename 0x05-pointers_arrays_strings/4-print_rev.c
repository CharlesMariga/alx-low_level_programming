#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 *
 * Description: prints a string in reverse having passes its pointer s
 *
 * Return: void
 */
void print_rev(char *s)
{
	int counter = 0;
	int i;

	while (*(s + counter) != 0)
	{
		counter++;
	}

	i = counter - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
