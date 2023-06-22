#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n : umber of times the character \ should be printeid
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (b = 1; b <= i; b++)
			_putchar(' ');
		_putchar(92); /* equal to '\' */
		_putchar('\n');
		}
	}
}
