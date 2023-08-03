#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number.
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	int i, bit;
	int l = 1, numBits;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	numBits = sizeof(n) * 8;
	for (i = numBits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			l = i;
			break;
		}
	}
	for (i = l; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		_putchar(bit + '0');
	}
}
