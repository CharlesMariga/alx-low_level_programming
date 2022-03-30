#include "main.h"

/**
 * factorial - factorial of a number
 * @n: number
 *
 * Descriptions: culculates the factorial of a number n
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
