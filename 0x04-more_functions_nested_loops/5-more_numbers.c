#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, b, c;

<<<<<<< HEAD
	for (i = 0; i < 10; i++)
=======
	for (i = 1; i <= 10; i++)
>>>>>>> a42e46cbed5bbf43a70a86e26076ef0099be3423
	{
		for (b = 1; b <= 14; b++)
		{
<<<<<<< HEAD
			if (b > 9)
			{
				_putchar((b / 10) + '0');
=======
			c = b;
			if (c >= 10)
			{
				_putchar(1 + '48');
				c = b % 10;
>>>>>>> a42e46cbed5bbf43a70a86e26076ef0099be3423
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
