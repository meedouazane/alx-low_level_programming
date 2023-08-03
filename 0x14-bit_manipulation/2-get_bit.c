#include "main.h"
/**
 * get_bit - value of a bit at a given index.
 * @n: decimal number.
 * @index :  is the index, starting from 0 of the bit you want to get.
 * Return: value of a bit at a given index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i, bit;
	unsigned int l = 1, numBits;
	int k = 0, idx;

	if (n == 0)
		return (-1);

	numBits = sizeof(n);
	for (i = numBits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			l = i;
			break;
		}
	}
	if (index > l)
		return (-1);
	idx = index;
	for (i = l; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (i == idx)
			k = bit;
	}
	return (k);
}
