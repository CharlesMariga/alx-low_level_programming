#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees an array
 * @grid: two dimensional array
 * @height: height of the array
 *
 * Description: deletes the memory of a two dimensional
 * array created using malloc
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
