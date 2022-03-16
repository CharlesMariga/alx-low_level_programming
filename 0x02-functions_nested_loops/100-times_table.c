#include "main.h"

/**
 * print_times_table - prints multiplication tables
 * @n: order of the multiplication table
 *
 * Description: prints multiplication table to the order of n
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int res = i * j;

				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res == 0 && j == 0)
					_putchar('0');
				else if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				} else if (res < 100)
				{
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				} else if (res >= 100)
				{
					_putchar(res / 100 + '0');
					_putchar((res % 100) / 10 + '0');
					_putchar((res % 100) % 10 + '0');
				}
			}
			_putchar('\n');

		}
	}
}
