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
	if (n <= 15 && n > 0)
	{
		int i = 0, j;

		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				if (j == 0)
				{
					_putchar('0');
				} else if (j < 10) {
					
				}
			}
			i++;
		}
	}
}
