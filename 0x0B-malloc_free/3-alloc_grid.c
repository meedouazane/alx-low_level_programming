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
	int i;

	p = (int **) malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
		p[i] = (int *)malloc(width * sizeof(int));

	if (height <= 0 || width <= 0)
		return (NULL);
	return (p);
}
