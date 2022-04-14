#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints a string
 * @separator: string separator
 * @n: number of string arguments
 * @i: index
 * @s: string
 *
 * Descripton: prints a string
 *
 * Return: void
 */
void print_string(const char *separator,
unsigned int n, unsigned int i, char *s)
{
	if (separator != NULL)
	{
		if (i == n - 1 && s == NULL)
			printf("(nil)\n");
		else if (i == n - 1 && s != NULL)
			printf("%s\n", s);
		else if (n != n - 1 && s == NULL)
			printf("(nil)%s", separator);
		else if (n != n - 1 && s != NULL)
			printf("%s%s", s, separator);
	} else
	{
		if (i == n - 1 && s == NULL)
			printf("(nil)\n");
		else if (i == n - 1 && s != NULL)
			printf("%s\n", s);
		else if (n != n - 1 && s == NULL)
			printf("(nill)");
		else if (n != n - 1 && s != NULL)
			printf("%s", s);
	}
}


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
		print_string(separator, n, i, s);
	}
}
