#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet
 *
 * Description: prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10()
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
