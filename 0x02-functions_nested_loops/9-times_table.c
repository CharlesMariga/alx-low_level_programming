#include "main.h"

/**
 * times_table - display a math table
 *
 * Description: Display a 9 by 9 mathematical table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			int num = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (num >= 10)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			} else
			{
				_putchar(num + '0');
			}

			j++;
		}
		_putchar('\n');
		i++;
	}
}
