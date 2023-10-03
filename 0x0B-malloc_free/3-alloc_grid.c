#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes it to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated 2D array, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = (int **)malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = (int *)malloc(sizeof(int) * width);

		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(g[j]);
			free(g);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}

