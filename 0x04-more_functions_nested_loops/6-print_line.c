#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *@n: tall of the line.
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++ )	
		_putchar('_');
	_putchar('\n');
}
