#include "main.h"

/**
 * print_square - draws a diagonal line on the terminal
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int size)
{
	int i;
	int b;

	for (i = 0; i < size; i++)
	{
		for (b = 0; b < size; b++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
