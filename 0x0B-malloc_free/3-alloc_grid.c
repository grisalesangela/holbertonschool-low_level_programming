#include "main.h"
/**
 * alloc_grid - Allocate 2 array of integers
 * @width: number of rows
 * @height: number of columns
 * Return: **grid on success, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	while (row < height)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (row = 0; row < height; row++)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
		row++;
	}
	return (grid);
}
