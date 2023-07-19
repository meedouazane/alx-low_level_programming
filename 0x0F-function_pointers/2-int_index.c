#include "function_pointers.h"
/**
 * int_index- searches for an integer.
 * @array: an array of integers.
 * @size: size of array.
 * @cmp: pointer to the function to be used to compare values.
 * Return: index of our int in array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
