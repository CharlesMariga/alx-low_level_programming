#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates and array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Description: creates and array of integers that
 * contains all the values from min (included) to max
 * (included)
 *
 * Return: array, NULL otherwise
 */
int *array_range(int min, int max)
{
	int diff, i;
	int *ptr;

	if (min > max)
		return (NULL);

	diff = (max - min)  + 1;

	ptr = malloc(diff * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i - min] = i;

	return (ptr);
}
