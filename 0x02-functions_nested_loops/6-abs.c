#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 *@n: giving number
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = ((n) ^ 2 / n);
		return (n);
	}
	else
		return (n);
}
