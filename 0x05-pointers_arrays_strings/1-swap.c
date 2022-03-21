#include "main.h"

/**
 * swap_int - swapt the values of two integers
 * @a: address of the first number
 * @b: address of the second number
 *
 * Description: swaps two numbers  a and b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
