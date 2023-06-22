#include "main.h"

/**
 * print_square - draws a square line on the terminal
 *@size: size of square
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int i, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
			_putchar(35);
			}
		_putchar('\n');
		}
	}
}
