#include "search_algos.h"
#define min
/**
 * binarySearch - searches for a value using Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @left: the first number in array.
 * @right: the last number in array.
 * @value: the value to search for.
 * Return: the index where value is located or -1.
 */
int binarySearch(int *array, int left, int right, int value)
{
	int i = 0;
	int half = 0;

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
/**
 * exponential_search - searches using exponential search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size:  the number of elements in array.
 * @value: the value to search for.
 * Return: the index where value is located or -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int t, result = 0;

	i = 1;
	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		if (i > size)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i < size)
		t = (int)i;
	else
		t = size - 1;
	printf("Value found between indexes [%ld] and [%d]\n", i / 2, t);
	result = i < size ? i : size - 1;
	return (binarySearch(array, i / 2, result, value));
}
