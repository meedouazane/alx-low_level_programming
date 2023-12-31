#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Always 0 (Success)
 */
void times_table(void)
{
    int i, b, c, t, f;

    for (i = 0; i <= 9; i++)
    {
        for (b = 0; b <= 9; b++)
        {
            c = i * b;

            if (c <= 9 && b <= 9 )
            {
                _putchar(c + '0');

                if (b < 9 )    
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
		}	
            }
            else if (c >= 9 && b < 9)
            {
                t = c / 10;
                f = c % 10;
                _putchar(t + '0');
                _putchar(f + '0');
                _putchar(',');
                _putchar(' ');
            }
            else
            {
                if (c <= 9 && b < 9)
                {
                    _putchar(' ');
                    _putchar(c + '0');
                }
                else if (c > 9 && b == 9)
                {
                    t = c / 10;
                    f = c % 10;
                    _putchar(t + '0');
                    _putchar(f + '0');
                }
            }
        }
        _putchar('\n');
    }
}

