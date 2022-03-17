#include "main.h"

/**
 * print_line - prints a line
 * @n: how ling the line is
 *
 * Description: prints a line using _
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
