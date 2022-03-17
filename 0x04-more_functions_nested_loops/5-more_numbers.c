#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers
 *
 * Description: prints numbers 0 through 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, ones, tens;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			ones = j % 10;
			tens = j / 10;

			if (tens != 0)
			{
				_putchar(tens + '0');
			}

			_putchar(ones + '0');
		}
		_putchar('\n');
	}
}
