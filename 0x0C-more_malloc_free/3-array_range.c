#include "main.h"
/**
 * array_range- creates an array of integers.
 * @min: starting number
 * @max: ending number
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ar;
	int diff = 0;
	int i, j;

	diff = max - min;
	if (min > max)
		return (NULL);

	ar = (int *)malloc((diff + 1) * sizeof(int));
		if (ar == NULL)
			return (NULL);

	for (j = 0, i = min; i <= max; i++, j++)
		*(ar + j) = i;
	return (ar);
}
