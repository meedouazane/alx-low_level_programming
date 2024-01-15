#include "search_algos.h"
/**
 * binary_search - searches for a value using Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size:  the number of elements in array.
 * @value: the value to search for.
 * Return: the index where value is located or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int right, half, i = 0;
	int left = 0;

	right = size - 1;
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		half = left + (right - left) / 2;
		i = half;
		if (array[half] == value)
			return (half);
		else if (array[half] < value)
			left = half + 1;
		else if (array[half] > value)
			right = half - 1;
	}
	return (-1);
}
