#include "main.h"

/**
 * print_sign - will cheack the sign og giving number
 * @n: number that we will cheack
 *
 * Return: 1 and , 0 if it's zero and -1  if it's negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	if (n > 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
