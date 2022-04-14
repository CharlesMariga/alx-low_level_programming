#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: number separator
 * @n: number of number arguments
 *
 * Description: prints numbers followed bya new line
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		if (separator != NULL)
		{
			if (i == n - 1)
				printf("%d\n", value);
			else
				printf("%d%s", value, separator);
		} else
		{
			if (i == n - 1)
				printf("%d\n", value);
			else
				printf("%d", value);
		}
	}

	va_end(args);
}
