#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to the array
 * @n: number elements in the array
 *
 * Description: Revers the array passed
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
