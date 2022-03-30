#include "main.h"

/**
 * divisors - number is prime?
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime number
 * @n: number to be checked
 *
 * Description: Checks whether a number is a prime number or
 * not
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (divisors(3, n));
}
