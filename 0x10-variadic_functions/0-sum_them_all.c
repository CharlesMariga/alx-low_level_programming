#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all parameters
 * @n: number of parameters
 *
 * Description: returns the sum of all parameters
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list args;

	if (n == 0)
		return (0);


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}
