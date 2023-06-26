#include "main.h"

/**
 * print_array - print array
 * @n: number of elements of the array
 * @a: array
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
		printf("%d, ", a[i]);
		if (i == n - 1)
		printf("%d\n", a[i]);
	}
}
