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
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid =  (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
