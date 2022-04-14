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

	if (separator != NULL && n > 0)
	{
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			value = va_arg(args, int);
			printf("%d", value);
			printf("%s", separator);
		}
	}

	printf("\n");
}
