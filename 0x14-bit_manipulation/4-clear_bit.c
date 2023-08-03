#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: decimal number.
 * @index: index, starting from 0 of the bit you want to set.
 * Return:  if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
