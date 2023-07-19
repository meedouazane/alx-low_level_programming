#include "function_pointers.h"
/**
 * array_iterator- function that executes a function given.
 * @size: the size of the array.
 * @array: array of int
 * @action: pointer to the function you need to use.
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int length = size;

	if (array && size && action)
	{
		for (i = 0; i < length; i++)
			action(array[i]);
	}
}
