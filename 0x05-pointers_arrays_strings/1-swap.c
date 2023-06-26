#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a - the first value.
 * @b - the second value.
 * return: the two values swaped.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
