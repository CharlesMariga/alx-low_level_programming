#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Description: creates a two dimensional array based
 * on the passed width and height
 *
 * Return: pointer or Null otherwise
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0, **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(arr[k]);

			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
