#include "main.h"
/**
 * free_grid - free a 2 array
 * @grid: figure of the array
 * @height: size of the array
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
