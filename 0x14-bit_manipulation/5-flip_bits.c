#include "main.h"
/**
 * flip_bits - the number of bits you would need to flip
 * @n: first decimal number.
 * @m: second decimal number.
 * Return: the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int o;

	o = n ^ m;
	while (o > 0)
	{
		c += o & 1;
		o = o >> 1;
	}
	return (c);
}
