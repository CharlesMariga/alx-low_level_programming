#include "main.h"

/**
 * puts2 - prints every other characters of a string
 * @str: string to be printed
 *
 * Description: prints every other character of a string
 * starting with the first character
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str && str[i] && str[i] != 0)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

