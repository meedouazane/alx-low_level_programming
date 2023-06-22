#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i;
	int b;

	for (i = 1; i <= n; i++)
	{
		for (b = 1; b <=n; b++)
		{
		_putchar(' ');
		_putchar('\n');
		}
	}
	_putchar('\\');
	_putchar('\n');
}
