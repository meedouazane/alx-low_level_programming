#include "main.h"
/**
 * jack_bauer - rints every minute of the day of Jack Bauer
 *
 * return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, b, r, k;
	int h, m;

	for (i = 0; i <= 23; i++)
	{
		for (b = 0; b <= 59; b++)
		{
			h = i / 10;
			r = i % 10;
			_putchar(h + '0');
			_putchar(r + '0');
			_putchar(':');
			m = b / 10;
			k = b % 10;
			_putchar(m + '0');
			_putchar(k + '0');
			_putchar('\n');
		}
	}
}
