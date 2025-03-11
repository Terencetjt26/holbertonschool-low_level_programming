#include <stdlib.h>

/**
* free_grid - Frees a 2D array of integers.
* @grid: Pointer to the 2D array.
* @height: Number of rows.
*
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
