#include "main.h"

void print_n(int n);

/**
 * print_to_98 - prints to 98
 * @n: starting number
 *
 * Description: prints numbers from number n to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			print_n(n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			print_n(n);
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

/**
 * print_n - prints  a number
 * @n: number
 *
 * Description: prints a number to console
 *
 * Return: void
 */
void print_n(int n)
{
	int num = n;

	if (num >= 100 || num <= -100)
	{
		if (num < 0)
		{
			num = -n;
			_putchar('-');
		}
		_putchar(num / 100 + '0');
		_putchar((num % 100) / 10 + '0');
		_putchar((num % 100) % 10 + '0');
		_putchar(',');
		_putchar(' ');
	} else if (n >= 10 || n <= 10)
	{
		if (num < 0)
		{
			num = -n;
			_putchar('-');
		}
		if (num >= 10)
			_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
		_putchar(',');
		_putchar(' ');
	} else
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}
