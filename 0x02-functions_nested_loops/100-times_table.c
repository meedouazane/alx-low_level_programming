#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n : giving number
 * Return : n tables
 */
void print_times_table(int n)
{
	int i, b, k, j, m;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (b = 0; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				k = i * b;
			if (k <= 99)
				_putchar(' ');
			if (k <= 9)
				 _putchar(' ');
			if (k >= 100)
			{
			m = k / 100;
			j = k % 10;
			_putchar(m + '0');
			_putchar(j + '0');
			}
				else if (k <= 99 && k >= 10)
					{
					m = k / 10;
					_putchar(m + '0');
					}
			j = k % 10;
			_putchar(j + '0');
			}
			_putchar('\n');
		}
	}
}

