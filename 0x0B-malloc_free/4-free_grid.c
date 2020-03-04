#include"holberton.h"
#include<stdlib.h>
/**
 * free_grid - frees a 2D grid.
 * @grid: Grid variable
 * @height: Height variable
 * Return: Void.
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
