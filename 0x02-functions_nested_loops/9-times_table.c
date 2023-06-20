#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Alawys 0 (Success)
 */

void times_table(void)
{
	int i, b, c, t, f;

	for (i = 0; i <= 9; i++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = i * b ;
			if (c <= 9 && b != 9)
			{
			_putchar(c + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
				if (c >= 9 && b != 9)
				{
				t = c / 10;
				f = c % 10;
				_putchar(t + '0');
				_putchar(f + '0');
				_putchar(',');
				_putchar(' ');
				}
				else
					if (c < 10 && b != 9)
					{
					 _putchar(c + '0');
					 }
                       			 if (c >= 9 && b == 9)
					 {
                      		 	 t = c / 10;
                    			 f = c % 10;
                     			  _putchar(t + '0');
                   			 _putchar(f + '0');
					 }
		}
	_putchar('\n');
	}
}
