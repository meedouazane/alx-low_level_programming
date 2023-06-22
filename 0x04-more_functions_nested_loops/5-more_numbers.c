#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, b, c;

	for (i = 1; i <= 10; i++)
	{
		for (b = 1; b <= 14; b++)
		{
			c = b;
			if (c >= 10)
			{
				_putchar(1 + '48');
				c = b % 10;
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
