#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of triangle
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, b, n;

	for (i = 0; i <= size; i++)
	{
		for (b = i; b < size; b++)
			_putchar(' ');
		for (n = 0; n < i; n++)
			_putchar('#');
		_putchar('\n');
	}
}
