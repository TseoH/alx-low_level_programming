#include <stdlib.h>

/**
 * free_grid - free a two dimensional grid
 * @width: the given grid
 * @height: the given height
 *
 * Return: void
 */
int **alloc_grid(int width, int height)
{
	int **array_mul;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_mul = malloc(sizeof(int) * height);

	if (array_mul == NULL)
	{
		free(array_mul);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array_mul[i] = malloc(sizeof(int) * width);
		if (array_mul == NULL)
		{
			free(array_mul);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			array_mul[i][k] = 0;
		}
	}
	return (array_mul);
}
