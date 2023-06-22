#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n : umber of times the character \ should be printed
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i;
	int b;

	for (i = 1; i <= n; i++)
	{
		for (b = 1; b <= i; b++)
		_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
}
