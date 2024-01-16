#include "search_algos.h"
/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search.
 * @size:  number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = 0, low = 0, high = 0, i;

	jump = sqrt(size);
	low = 0;
	high = jump;
	while (high < (int)size && array[high - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low = high;
		high += jump;
		if (high > (int)size)
			high = size;
		if (high < (int)size && array[high - 1] < value)
			printf("Value found between indexes [%d] and [%d]\n", low, high);
	}
	for (i = low; i < high; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
	}
	return (-1);
}
