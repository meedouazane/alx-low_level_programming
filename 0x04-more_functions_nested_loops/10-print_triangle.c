#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of triangle
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (b = i; b < size; b++)
			{
				if ((b + i) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
