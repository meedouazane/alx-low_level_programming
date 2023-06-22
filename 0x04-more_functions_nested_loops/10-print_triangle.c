#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of triangle
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (b = size - i; b > 1; b--)
			{
				_putchar(32);
			}
			for (c = 0; c <= i; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
