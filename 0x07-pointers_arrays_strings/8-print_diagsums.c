#include "main.h"

/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix of integers
 * @size: size of arrays.
 * @a: diagonals.
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2 = 0;

	for (i = 0; i < size; i++) 
	{
		sum1 = sum1 + a[i * i];  
		sum2 = sum2 + a[i * size + (size - 1 - i)]; 
	}
	
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
