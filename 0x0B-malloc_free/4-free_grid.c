#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional array  previously created by alloc_grid
 * @grid: the array to be freed
 * @height: array column
 * Return: void no return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
