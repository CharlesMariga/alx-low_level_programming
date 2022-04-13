#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: function
 *
 * Description: searches for ane element in an integer
 * array and returns its index
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, index = -1;

	if (array && size && cmp)
	{
		if (size < 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				index = i;
				return (index);
			}
		}
	}

	return (index);
}
