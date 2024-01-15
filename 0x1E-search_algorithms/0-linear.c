#include "search_algos.h"
/**
 * linear_search - searches using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search.
 * @size:  number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
