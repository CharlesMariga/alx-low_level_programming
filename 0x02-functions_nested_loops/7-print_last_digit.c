#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: prints the last digit of n
 *
 * Description: prints the last digit of a number n
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == 0)
	{
		_putchar('0');
		return (n);
	} else if (n < 0)
	{
		last_digit = -n % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
