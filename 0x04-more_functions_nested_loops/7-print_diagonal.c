#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: numbers of lines
 *
 * Description: prints a pattern diagonaly
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				if (j != i)
				{
					_putchar(' ');
				} else
				{
					_putchar('\\');
				}
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
