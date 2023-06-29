#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int temp, i, c = 0;

	for (i = n - 1; c < i; i--, c++)
	{
	temp = a[c];
	a[c] = a[i];
	a[i] = temp;
	}
}
