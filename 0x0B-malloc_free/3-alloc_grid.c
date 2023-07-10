#include "main.h"
/**
 * alloc_grid-  pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: int pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
			{
			for (j = i - 1; j >= 0; j--)
				free(p[j]);

			free(p);
			return (NULL);
			}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		p[i][j] = 0;
	}

	return (p);
}
