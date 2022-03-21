#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the numbers in a interger array
 * @a: array to be printed
 * @n: number of integers to be printed
 *
 * Description: prints a specified number of inters n of
 * array a
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
