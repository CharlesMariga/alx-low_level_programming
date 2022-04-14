#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: number of string arguments
 *
 * Description: prints strings followed by a new line
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (separator != NULL)
		{
			if (i == n - 1)
				printf("%s\n", s);
			else
				printf("%s%s", s, separator);
		} else
		{
			if (i == n - 1)
				printf("%s\n", s);
			else
				printf("%s", s);
		}
	}
}
