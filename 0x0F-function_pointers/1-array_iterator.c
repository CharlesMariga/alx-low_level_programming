#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * @array: array of integers
 * @size: size of the array
 * @action: function
 *
 * Description: executes a function given as a parameter
 * on each element of an array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i = 0;

		for (; i < (int)size; i++)
			action(array[i]);
	}
}
