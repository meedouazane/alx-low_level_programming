#include "main.h"
/**
 * print_number - prints an integer
 * @n : the number that we'll print
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
	_putchar('_');
	j = -j;
	}
	if ((j / 10) > 0)
	{
	print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
