#include <stdlib.h>

/**
* free_grid - free print
* @grid: int
* @height: int
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
