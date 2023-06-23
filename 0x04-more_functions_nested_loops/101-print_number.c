#include "main.h"
/**
 * print_number - prints an integer
 * @n : the number that we'll print
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int j = n;

	if (n >= 1000 && n < 10000)
	{
		_putchar(((n / 1000) % 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 1000) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n == 0)
		_putchar(n + '0');
	else
	{
		j = -j;
		_putchar('-');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
	}
}
