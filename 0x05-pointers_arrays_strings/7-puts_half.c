#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be printed
 *
 * Description: prints the second half of a string str
 *
 * Return: void
 */
void puts_half(char *str)
{
	int counter = 0, half, i;

	while (*(str + counter) != 0)
	{
		counter++;
	}

	if (counter % 2 == 0)
	{
		half = counter / 2;
	} else
	{
		half = ((counter - 1) / 2) + 1;
	}

	i = half;
	while (i < counter)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

